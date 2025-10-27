#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _isdigit - Prints the last digit of a number
 *
 * @n: The number to check
 *
 * Return: the value of the last digit
 *
 */
int _isdigit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit >= 0 && lastDigit <= 9)
	{
		return (1);
	}
	return (0);
}
