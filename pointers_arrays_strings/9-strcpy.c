#include "main.h"

/**
 * _strcpy - copie la chaîne pointée par src dans le buffer dest
 * @dest: le buffer où la chaîne sera copiée
 * @src: la chaîne source à copier
 *
 * Return: le pointeur vers dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
