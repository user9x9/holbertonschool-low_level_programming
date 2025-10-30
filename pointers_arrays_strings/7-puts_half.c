#include "main.h"

/**
 * puts_half - Affiche a partir de la moitie dla chaine de caracteres
 *
 * @str: la chaine de caracteres
 *
 * Return: void
 */

void puts_half(char *str)
{
	int a = 0;
	int debut = 0;

	while (str[a] != '\0')
	{
		a++;

	}

	if (a % 2 == 0)
	{
		debut = a / 2;
	}
	else
	{
		debut = (a + 1) / 2;
	}

	while (str[debut] != '\0')
	{
		_putchar(str[debut]);
		debut++;
	}
	_putchar('\n');
}
