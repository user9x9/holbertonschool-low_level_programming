#include "main.h"
#include <stddef.h>

/**
* _strchr - localise la première occurrence d'un caractère dans une chaîne
* @s: la chaîne dans laquelle chercher
* @c: le caractère à trouver
*
* Return: un pointeur vers le premier caractère c trouvé dans s,
*         ou NULL si le caractère n'est pas présent.
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (1)
	{
		if (s[i] == c)
			return (&s[i]);
		if (s[i] == '\0')
			break;
		i++;
	}
	return (NULL);
}
