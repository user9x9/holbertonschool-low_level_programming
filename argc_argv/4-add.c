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
    int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

    while (i < argc)
    {
        if (argv[i] < '0' || argv[i] > '9')
        {
            printf("Error\n");
            return (1);
        }
        i++;
    }


	sum = atoi(argv[i]);

	printf("%d\n", sum);

	return (0);
}
