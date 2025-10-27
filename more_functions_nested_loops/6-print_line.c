#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar('_');
		a++;
	}

	_putchar('\n');

}
