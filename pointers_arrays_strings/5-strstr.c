#include "main.h"
#include <stddef.h>

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