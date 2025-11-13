#include <stdlib.h>

/**
* array_range - Creates an array of integers
* @min: Minimum value (included)
* @max: Maximum value (included)
* Return: Pointer to the newly created array or NULL if it fails
*/

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
