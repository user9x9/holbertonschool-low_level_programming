#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * more_numbers - Fonction qui affiche 10fois de 0 a 14
 *
 * Return:void
 *
 */

void more_numbers(void)
{
	int a = 0;
	int b;


	while (a < 10)
	{
		b = 0;

		while (b <= 14)
		{

			if (b >= 10)
			{
				_putchar('1');
			}
			_putchar((b % 10) + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
