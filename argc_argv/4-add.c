#include <stdio.h>
#include <stdlib.h>

/**
* main - Program that adds positive numbers
* @argc: The number of arguments passed to the program
* @argv: Array of string representing the arguments
* Return: 0 if no number is passed and 1 if the number contains
* symbols that are not digits.
*
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum = sum + atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
