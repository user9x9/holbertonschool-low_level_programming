#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int i = 0;
    int n1 = 0;
    int n2 = 0;

    while (i < size)
    {
        n1 = n1 + a[i * size + i];
        n2 = n2 + a[i * size + (size - i - 1)];
        
        i++;
    }
    printf("%d, %d\n", n1, n2);
}