#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_line - Affiche autant de fois n que _
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
