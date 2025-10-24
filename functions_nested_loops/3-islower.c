#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Check si le caarctere est min
 * @c: Le caractere a verifier
 * Return: 1 si le caractere est min sinon 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
