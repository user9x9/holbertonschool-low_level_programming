#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar(lastDigit);

	return (lastDigit);
}
