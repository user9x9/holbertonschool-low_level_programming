#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a newly allocated space
* in memory which contains a copy of the string given as a parameter
* @str: String to be copied
* Return: A pointer to the duplicated string on succes,
* NULL if str is NULL or if memory allocation fails
*/

char *_strdup(char *str)
{
	unsigned int a = 0;
	unsigned int j = 0;
	char *i;

	i = malloc(sizeof(char) * (a + 1));


	if (str == NULL || i == NULL)
	{
		return (NULL);
	}

	while (str[a] != '\0')
	{
		a++;
	}

	while (str[j] != '\0')
	{
		i[j] = str[j];
		j++;
	}
	return (i);
}
