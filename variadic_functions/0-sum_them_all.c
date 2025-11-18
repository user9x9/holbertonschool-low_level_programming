#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* sum_them_all - Function that returns the sum of all its parameters
* @n: Number of arguments passed to the function
* Return: Result of all the arguments and 0 if n is 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i = 0;
	int result = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		result = result + va_arg(args, int);
		i++;
	}
	va_end(args);
	return (result);
}
