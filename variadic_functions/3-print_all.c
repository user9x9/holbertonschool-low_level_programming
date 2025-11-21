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
	int i = 0;
	int a = 0;
	char *str;

	va_list args;
	va_start(args, format);

	if (format == NULL)
		return;

	while (format[i])
    {
        if (a && (format[i] == 'c' || format[i] == 'i' ||
                        format[i] == 'f' || format[i] == 's'))
            printf(", ");

        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                a = 1;
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                a = 1;
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                a = 1;
                break;
            case 's':
                str = va_arg(args, char *);
                if (!str)
                    str = "(nil)";
                printf("%s", str);
                a = 1;
                break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
