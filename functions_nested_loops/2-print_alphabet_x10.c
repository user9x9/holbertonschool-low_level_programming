#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Affiche l alphabet 10 fois en min
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{

	int compteur = 0;

	while (compteur <= 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		_putchar('\n');
		compteur++;
	}
}
