#include "main.h"

/**
* _strspn - obtient la longueur d'un préfixe de sous-chaîne
* @s: la chaîne à rechercher
* @accept: les caractères à comparer dans la chaîne s
*
* Return: le nombre d'octets dans le segment initial de s
*         qui ne contiennent que des caractères présents dans accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int a = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		a = 0;

		while (accept[a] != '\0')
		{
			if (s[i] == accept[a])
			{
				break;
			}
		a++;
		}
			if (accept[a] == '\0')
			{
				return (count);
			}
	count++;
	i++;
	}
	return (count);
}