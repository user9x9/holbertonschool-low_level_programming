#include <stdio.h>

/**
 * main - Affiche de 1 a 100 et pr les multiples de 3
 * il affiche Fizz et pr multiples de 5 Buzz et si c'est les
 * deux alors FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int a = 1;

	while (a <= 100)
	{

		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (a % 3 == 0)
		{
			printf("Fizz");
		}

		else if (a % 5 == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d", a);
		}

		if (a < 100)
		{
			printf(" ");
		}

		a++;
	}
	printf("\n");
	return (0);
}
