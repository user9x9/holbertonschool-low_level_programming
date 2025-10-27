#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _isdigit - Prints the last digit of a number
 *
 * @c: The number to check
 *
 * Return: 1 if @c is a digit and 0 if not
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
	return (0);
	}
}
