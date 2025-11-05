#include "main.h"

/**
* factorial - Returns the factorial of n
* @n: The number
* Return: Factorial of n or -1 is its lower than O
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
}
