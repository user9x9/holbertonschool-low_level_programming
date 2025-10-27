#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void more_numbers(void)
{
	int a = 0;
	int b;


	while (a <= 10)
	{
		b = 0;

		while (b <= 14)
		{
			b++;

			if (b >= 10)
			{
				_putchar('1');
			}	
			_putchar((b % 10) + '0');
			b++;
		}
	}
	_putchar('\n');
	a++;
}
