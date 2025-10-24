#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * times_table - Prints the table of 9
 *
 *
 */

void times_table(void)
{
    int n1 = 0;
    int n2;
    int prod;

    while (n1 < 10)
    {
        n2 = 0;

        while (n2 < 10)
        {
            prod = n1 * n2;

            if (n2 != 0)
            {
                _putchar(',');
                _putchar(' ');

			if (prod < 10)
			_putchar(' ');
	    	}

		if (prod >= 10)
			_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');

			n2++;
		}
		_putchar('\n');
		n1++;
	}
}
