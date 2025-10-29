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
	char *a = s;
	char *b = s;
	char temp;

	while (*b != '\0')
	{
		b++;
	}

	b--;

	while (a < b)
	{
		temp = *a;
		*a = *b;
		*b = temp;

		a++;
		b--;
	}
}
