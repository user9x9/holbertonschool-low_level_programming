#include "main.h"

/**
* _memset - remplit une zone mémoire avec un octet constant
* @s: pointeur vers la zone mémoire à remplir
* @b: octet constant avec lequel remplir la mémoire
* @n: nombre d'octets à remplir
*
* Return: pointeur vers la zone mémoire s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}