#include <stdio.h>
#include "main.h"

void print_diagonal(int n)
{
	int a = 0;

	while (a < n)
	{
		a++;
		_putchar('\\');
	}
	_putchar('\n');
}
