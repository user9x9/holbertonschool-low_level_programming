#include "main.h"

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, 2));
	}
}

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