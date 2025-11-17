#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - Searches for an integer in an array using a function
* @array: Pointer to the array of integers
* @size: Number of elements in the array
* @cmp: Pointer to a function that compares an integer
* Return: void
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
a