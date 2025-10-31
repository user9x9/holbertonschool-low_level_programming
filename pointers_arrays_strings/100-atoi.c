#include "main.h"

int _atoi(char *s)
{
    int result = 0;
    int sign   = 1;
    int i = 0;

    while (*s == ' ')
        s++;

    while (*s == '+' || *s == '-')
    {
        char *p = s;
        while (*p == '+' || *p == '-') p++;
        if (*p < '0' || *p > '9')
            break;

        if (*s == '-')
            sign = -sign;
        s++;
    }

    while (*s != '\0')
    {
        if (*s >= '0' && *s <= '9')
        {
            i = 1;
            result = result * 10 + (*s - '0');
            s++;
        }
        else if (i)
        {
            break;
        }
        else
        {
            s++;
        }
    }

    return result * sign;
}
