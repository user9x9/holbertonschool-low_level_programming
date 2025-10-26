#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(',');
		_putchar(' ');
		n++;
	}

	return (0);
}
