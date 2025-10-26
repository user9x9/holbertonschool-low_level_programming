#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_to_98 - Affiche tous les nombres de n a 98
 *
 * @n: L entier de base
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d", n);
		n++;

		while (n <= 98)
		{
			printf(", %d", n);
			n++;
		}
	}


		else
		{
			printf("%d", n);
			n--;
			while (n >= 98)
			{
				printf(", %d", n);
				n--;
			}
		}

		printf("\n");
}
