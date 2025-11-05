#include "main.h"

/**
* prime_number - Checks recursively if n is a prime number
* @n: The number to check
* @i: The current divisor
* Return: 1 if n is prime 0 otherwise
*/

int prime_number(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, i + 1));
	}
}

/**
* is_prime_number - Returns 1 if the input integer is a prime number
* otherwise return 0
* @n: The number to check
* Return: 1 if n is prime and 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, 2));
	}
}
