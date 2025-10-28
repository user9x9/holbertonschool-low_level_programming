#include <stdio.h>
#include "main.h"

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (a < n)
	{	
		b = 0;

		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
}
