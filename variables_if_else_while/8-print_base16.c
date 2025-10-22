#include <stdio.h>

/**
 * main - Affiche les chiffres de 0 a 9 et lalphabet
 *
 * Return: 0
 */

int main(void)
{
	int nombres = 0;
	char alphabet = 'a';

	while (nombres <= 9)
	{
		putchar(nombres + '0');
		nombres++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
