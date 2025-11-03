#include "main.h"

/**
*
* _memcpy - copie n octets de la mémoire src vers dest
* @dest: buffer de destination
* @src: buffer source
* @n: nombre d'octets à copier
*
* Return: un pointeur vers dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
