#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine le dernier chiffre d'un nombre
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10

	if (lastDigit > 5)
	{
		printf("Last digit of %d is greater than 5\n");
	}	
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is 0\n");
	}
	else if (lastDigit < 6 && != 0)
	{
		printf("Last digit of %d is less than 6 and not 0\n");
	}
	return (0);
}
