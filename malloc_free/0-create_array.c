#include <stdio.h>
#include <stdlib.h>

/**
* create_array - Creates an array of chars
* and initializes it with a specific char
* @size: The size of the array
* @c: Initialize the array of chars
* Return: NULL if size is 0 or if it fails otherwise
* it returns array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		exit(1);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}