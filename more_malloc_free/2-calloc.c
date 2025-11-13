#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i, result;
    char *ptr;

    result = nmemb * size;

    if (nmemb == 0 || size == 0)
        return (NULL);

    malloc(result);

    if (ptr == NULL)
        return (NULL);

    while (i < result)
    {
        ptr[i] = 0;
        i++
    }
    return (ptr);
}