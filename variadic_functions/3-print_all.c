#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *str;
    char sep = 0;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == 'c' || format[i] == 'i' ||
            format[i] == 'f' || format[i] == 's')
        {
            if (sep)
                printf(", ");

            if (format[i] == 'c')
                printf("%c", va_arg(args, int));
            if (format[i] == 'i')
                printf("%d", va_arg(args, int));
            if (format[i] == 'f')
                printf("%f", (double)va_arg(args, double));
            if (format[i] == 's')
            {
                str = va_arg(args, char *);
                if (!str)
                    printf("(nil)");
                else
                    printf("%s", str);
            }
            sep = 1;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}
