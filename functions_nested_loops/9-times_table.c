#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 *
 * Description: This function prints the 9 times table in a formatted way,
 * where each row represents a multiplier and each column represents
 * the product of that multiplier with numbers from 0 to 9.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, e;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			e = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (e < 10)
				{
					_putchar(' ');
			}		}

				if (e >= 10)
				{
					_putchar((e / 10) + '0');
					_putchar((e % 10) + '0');
				}
				else 
				{
					_putchar(e + '0');
				}
			
		}
		_putchar('\n');
	}
}
