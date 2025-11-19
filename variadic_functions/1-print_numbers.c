#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_numbers - Prints numbers separated by a string
* @separator: The string to print between numbers
* @n: Number of integers passed to the function
* Description: Prints number followed by a new line and if
* separator is NULL its not printed and uses variadic arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int result;

	va_list arg;

	va_start(arg, n);

	while (i < n)
	{
		result = va_arg(arg, int);

		printf("%d", result);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}
	va_end(arg);
	printf("\n");
}
