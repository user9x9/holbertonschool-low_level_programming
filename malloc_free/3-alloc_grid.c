#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **a;
    int i = 0, n = 0;

    if (width <= 0 || height <= 0)
        return (NULL);

    a = malloc(sizeof(int *) * height);

    while (i < height)
    {
        a[i] = malloc(sizeof(int) * width);
        n = 0;

        while (n < width)
        {
            a[i][n] = 0;
            n++;
        }
        i++;
    }
    if (a[i] == NULL)
    {
        while (i > 0)
        {
            i--;
            free(a[i]);
        }
        free(a);
        return(NULL);
    }
    
    return (a);
}