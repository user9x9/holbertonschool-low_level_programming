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
	if (n >= 0 && n <= 9)
	{
		return (1);
	}

	else
	{
	return (0);
	}
}
