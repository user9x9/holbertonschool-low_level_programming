#include <stdlib.h>

/**
* _calloc - Allocates memory for an array and set it to zero
* @nmemb: Number of elements
* @size: Size of each elements in bytes
* Return: Pointer to allocated memory or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, result;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = nmemb * size;

	ptr = malloc(result);

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (i < result)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
