#include <stdio.h>

/** 
 * main - Script qui ecrit alphabet en min et maj
 *
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';
	char alphabetMaj = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (alphabetMaj <= 'Z')
	{
		putchar(alphabetMaj);
		alphabetMaj++;
	}

	putchar('\n');
	return (0);
}
