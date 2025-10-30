#include <stdio.h>
#include "main.h"

/**
 * print_array - Affiche les valeurs du tableau
 *
 * @a: Le tableau
 * @n: Les elements du tableau
 *
 * Return: void
 */


void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
