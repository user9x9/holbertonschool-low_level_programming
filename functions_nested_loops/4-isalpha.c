#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * @c: Le caractere a verifier
 *
 * Return: 1 si cest une lettre min ou maj sinn 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
