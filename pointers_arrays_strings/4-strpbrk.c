#include "main.h"
#include <stddef.h>

/**
* _strpbrk - Recherche la première occurrence de n'importe quel caractère de accept dans s.
* @s: La chaîne dans laquelle chercher.
* @accept: Les caractères à rechercher dans s.
*
* Return: Un pointeur vers le premier caractère de s qui correspond à un caractère de accept,
*         ou NULL si aucun caractère n'est trouvé.
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int a = 0;

	while (s[i] != '\0')
	{
		a = 0;

		while (accept[a] != '\0')
		{
			if (s[i] == accept[a])
			{
				return (&s[i]);
			}
			a++;
		}
		i++;
	}
	return (NULL);
}