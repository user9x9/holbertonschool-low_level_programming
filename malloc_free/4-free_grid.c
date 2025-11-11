#include <stdlib.h>

/**
* free_grid - Frees a 2D grid previously cretaed by alloc_grid
* @grid: Pointer to the 2D grid
* @height: Height of the grid
* Return: void
*/

void free_grid(int **grid, int height)
{
    unsigned int i = 0;

    while (i < height)
    {
        free(grid[i]);
        i++;
    }
    free (grid);
}