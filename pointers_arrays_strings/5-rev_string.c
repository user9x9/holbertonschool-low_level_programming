#include <stdio.h>
#include "main.h"

/**
 * rev_string - Affiche la chaine de caractere en reverse
 *
 * @s: Pointeur dla chaine de caractere
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}

	b = a - 1;

	while (b >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}
