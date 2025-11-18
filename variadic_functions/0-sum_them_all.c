#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

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