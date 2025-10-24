#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void times_table(void)
{
	int n1 = 0;
	int n2 = 0;

	while (n1 < 10);
	{
		n1++;
		while (n2 < 10)
		{
			_putchar((n1 * n2) + '0');
			if (n2 < 9)
			{
				_putchar(', ');
			}
		}
		_putchar('\n');
	}
}
