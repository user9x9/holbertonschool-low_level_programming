#include <stdio.h>
#include "main.h"

/**
 * print_rev - Affiche la chaine de caractere en reverse
 *
 * @s: Pointeur dla chaine de caractere
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;
	int b = a - 1;

	while (s[a] != '\0')
	{
		a++;
	}

	while (b >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}
