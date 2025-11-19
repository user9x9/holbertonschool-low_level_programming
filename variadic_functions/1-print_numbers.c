#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i = 0;

    va_list arg;

    va_start(arg, n);

    while (i < n)
    {
        int result = va_arg(arg, int);
        printf("%d", result);

        if (separator != NULL && i < n - 1)
            printf("%s", separator);

        i++;
    }
    va_end(arg);
    printf("\n");
}