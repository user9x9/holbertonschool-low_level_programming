#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* string_nconcat - Concatenes two strings
* @s1: First string
* @s2: Second string
* @n: Number of bytes to copy from s2
* Return: A pointer to the newly allocated memory containing s1
* followed by the first n bytes of s2 and null terminated
* If memory allocation fails it returns NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = 0;
	l2 = 0;
	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n > l2)
		n = l2;
	result = malloc(l1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (i < l1)
	{
		result[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
