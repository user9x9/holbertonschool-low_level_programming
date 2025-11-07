#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the result of a multiplication
* @argc: The number of arguments passed to the program
* @argv: Array of string representing the arguments
* Return: The sum of the two numbers and 1 if the program
* doesnt receive two arguments
*/

int main(int argc, char *argv[])
{
	int num1, num2, resultat;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	resultat = num1 * num2;

	printf("%d\n", resultat);

	return (0);
}
