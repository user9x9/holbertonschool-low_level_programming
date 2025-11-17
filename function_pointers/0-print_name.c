#include "main.h"
#include <stdlib.h>

void print_name(char *name, void (*f)(char *))
{
    if (f == NULL)
        return;

    f(name);
}