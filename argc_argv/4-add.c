#include <stdio.h>
#include <stdlib.h>

/**
* main - 
* @argc: The number of arguments passed to the program
* @argv: Array of string representing the arguments
* Return: 
* 
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int a = 0;
	int sum = 0;

	sum = atoi(argv[i]);

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (argv[i][a] < '0' || argv[i][a] > '9')
		{
			printf("Error\n");
			return (1);
		}
		i++;
		j++;
	}

	printf("%d\n", sum);

	return (0);
}
