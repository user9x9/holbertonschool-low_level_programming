#include "main.h"

/**
 * _strcpy - Copie la chaine de caracteres
 *
 * @str: la chaine de caractere a copier
 * @dest: buffer ou la chaine sera copiÃe 
 *
 * Return: dest
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
