#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
