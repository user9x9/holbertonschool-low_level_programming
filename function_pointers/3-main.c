#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n1;
    int n2;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    n1 = atoi(argv[1]);
    n2 = atoi(argv[3]);


    operation = get_op_func(argv[2]);

    if (operation == NULL)
    {
        printf("Error\n");
        exit(99);
    }
    
    printf("%d\n", operation(n1, n1));
    return (0);

}