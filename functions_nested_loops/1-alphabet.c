#include <stdio.h>
#include "main.h"
/**
 * main - Script qui affiche l alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
/*
int main(void)
{
	print_alphabet();
	return (0);
}*/
