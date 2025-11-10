#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    unsigned int i = 0;

    if (size == 0)
    {
        return (NULL);
    }

    char *array = malloc(size * sizeof(char));

    if (array == NULL)
    {
        exit(1);
    }

    while (i < size)
    {
        array[i] = c;
    }

    return (array);
}
