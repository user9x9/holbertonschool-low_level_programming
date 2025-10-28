#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Function that prints a triangle
 *
 * @size: Size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int a = 1;
	int b = 0;
	int c = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (a <= size)
	{
		b = 0;

		while (b < size - a)
		{
			_putchar(' ');
			b++;
		}

		c = 0;

		while (c < a)
		{
			_putchar('#');
			c++;
		}

		_putchar('\n');
		a++;
	}
}
