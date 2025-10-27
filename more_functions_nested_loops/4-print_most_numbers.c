#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 without 2 and 4
 *
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
		_putchar('\n');
		a++;
	}
}
