#include <stdio.h>
#include "main.h"

/**
 * puts2 - Affiche un caractere sur deux 
 *
 * @str: La chaine de caracteres
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i+=2;
	}
	_putchar('\n');
}
