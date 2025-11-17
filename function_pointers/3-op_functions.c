#include "3-calc.h"
#include <stdio.h>

/**
* op_add - Returns the sum of a + b
* @a: First integer
* @b: Second integer
* Return: The result of a + b
*/

int op_add(int a, int b)
{
	return (a + b);
}

int op_mul(int a, int b)
{
	return(a * b);
}

int op_sub(int a , int b)
{
	return (a - b);
}

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return(a % b);
}