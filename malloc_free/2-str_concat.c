#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * Return: A pointer to the newly allocated memory containing the concatenated
 * string and NULL if memory allocation fails or if both strings are NULL.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, a = 0;
	char *result;

	while (s1[i] != '\0')
		i++;

	while (s2[a] != '\0')
		a++;

	result = malloc((i + a + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	i = 0;

	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}

	a = 0;

	while (s2[a] != '\0')
	{
		result[i + a] = s2[a];
		a++;
	}

	result[i + a] = '\0';

	return (result);
}
