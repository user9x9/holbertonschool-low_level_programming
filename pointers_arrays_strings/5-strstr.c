#include "main.h"
#include <stddef.h>

/**
* _strstr - localise la première occurrence de la sous-chaîne
* needle dans la chaîne haystack.
* @haystack: la chaîne dans laquelle chercher
* @needle: la sous-chaîne à trouver
*
* Return: un pointeur vers le début de la sous-chaîne needle dans haystack,
*         ou NULL si la sous-chaîne n'est pas trouvée.
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int a = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[a])
		{
			a = 0;

			while (needle[a] != '\0' && haystack[i + a] == needle[a])
			{
				a++;
			}

			if (needle[a] == '\0')
			{
				return (&haystack[i]);
			}
		}
	i++;
	}
	return (NULL);
}
