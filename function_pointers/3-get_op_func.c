#include "calc.h"
#include <stdlib.h>
#include <stdio.h>

int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };


    while (ops->op != NULL)
    {
        if (strcmp(s, ops->op) == 0)
            return (ops->f);
        ops++;
    }
    return (NULL);
}