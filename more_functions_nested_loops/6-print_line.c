#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_line - Affiche _ autant de fois que le nombre n
 *
 * @n: la variable avec une  valeur inconnue
 *
 * Return: void
 *
 */

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar('_');
		a++;
	}

	_putchar('\n');

}
