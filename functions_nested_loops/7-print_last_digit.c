#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: The number to check
 *
 * Return: the value of the last digit
 *
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
