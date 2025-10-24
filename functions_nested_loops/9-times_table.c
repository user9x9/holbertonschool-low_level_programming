#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_times_table - Prints the 9 times table, starting from 0.
 *
 * Description: This function prints the 9 times table in a formatted way,
 * where each row represents a multiplier and each column represents
 * the product of that multiplier with numbers from 0 to 9.
 *
 * Return: void
 */

void print_times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d", i * j);
			if (j < 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}

