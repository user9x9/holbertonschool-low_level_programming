#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Affiche l alphabet en min
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';

	int compteur = 0;

	while (compteur <= 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

	}
	_putchar('\n');
	compteur++;
}
