#include <stdio.h>

/**
 * main - Script qui affiche l alphabet a l envers
 *
 * Return: 0
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
