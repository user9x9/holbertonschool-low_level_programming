#include <stdio.h>
#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: the string to calculate
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
