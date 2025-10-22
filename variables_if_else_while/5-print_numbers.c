#include <stdio.h>

/**
 * main - Affiche les chiffres de 0 a 9
 *
 * Return: 0
 */

int main(void)
{
	int nombres = 0;

	while (nombres <= 9)
	{
		printf("%d", nombres);
		nombres++;
	}
	printf("\n");
	return (0);
}
