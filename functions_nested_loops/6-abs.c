#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - Calcule la valeur absolue dun entier etrenvoi en positif
 *
 * @n: Lentier a check
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
