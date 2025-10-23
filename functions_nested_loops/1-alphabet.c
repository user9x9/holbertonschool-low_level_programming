#include <stdio.h>

/**
 * main - Script qui affiche l alphabet
 *
 * Return: 0
 */

void print_alphabet(void);

void print_alphabet(void);
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
