#include <stdio.h>

/**
* main - Prints all arguments it receives
* @argc: The number of arguments passed to the program
* @argv: Array of string representing the arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
