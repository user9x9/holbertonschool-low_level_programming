#include "main.h"

/**
 * _strcat - concatene deux chaines
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int a = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';

	return (dest);
}
