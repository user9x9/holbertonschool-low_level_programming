#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything based on the format string
 * @format: list of types of arguments passed
 * c: char
 * i: integer
 * f: float
 * s: string (print (nil) if NULL)
 * Description: prints arguments separated by ", " and ends with a new line.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	int a = 0;
	char c;
	int n;
	double f;
	char *s;
	va_list args;
	va_start(args, format);

	while (format[i] != '\0')
	{
		switch(format[i])
		{
			case 'c':
				if (a > 0)
					printf(", ");
				c = va_arg(args, int);
				printf("%c", c);
				a++;
				break;
			case 'i':
				if (a > 0)
					printf(", ");
				n = va_arg(args, int);
				printf("%d", n);
				a++;
				break;
			case 'f':
				if (a > 0)
					printf(", ");
				f = va_arg(args, double);
				printf("%f", f);
				a++;
				break;
			case 's':
				if (a > 0)
					printf(", ");
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				a++;
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
