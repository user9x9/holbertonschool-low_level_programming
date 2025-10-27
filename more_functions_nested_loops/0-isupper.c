#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - Check si le caarctere est maj
 * @c: Le caractere a verifier
 * Return: 1 si le caractere est min sinon 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else 
	{
		return (0);
	}
}
