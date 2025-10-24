#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * jack_baueur = Affiche de 00:00 a 23:59
 *
 * Return: Rien
 *
 */
void jack_bauer(void)
{
	int heure = 0;
	int minute = 0;

	while (heure < 24)
	{
		minute = 0;

		while (minute < 60)
		{
			_putchar((heure / 10) + '0');
			_putchar((heure % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
		}
		heure++;
	}


}
