#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* malloc_checked - Function that allocates memory using malloc
* @b: Number of bytes to allocate
* Return: A pointer to the allocated memory
* otherwise exit the process with status 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
