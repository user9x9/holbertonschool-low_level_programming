#include <stdlib.h>

/**
 * alloc_grid - creates a 2D grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2D grid initialized to 0,
 * NULL on failure or if width/height <= 0
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int n;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = 0;
	n = 0;

	a = malloc(sizeof(int *) * height);

	while (i < height)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
		n = 0;

		while (n < width)
		{
			a[i][n] = 0;
			n++;
		}
		i++;
	}
	return (a);
}
