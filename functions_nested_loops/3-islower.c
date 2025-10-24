#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Affiche 1 si c est min sinon il affiche 0
 *
 * Return: 0 
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
