#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Function that prints a square
 *
 * @size: Number of times the character # should be printed
 *
 * Return: void
 */

void print_triangle(int size)
{
	int a = 0;
	int b = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (a < size)
	{
		b = 0;

		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
