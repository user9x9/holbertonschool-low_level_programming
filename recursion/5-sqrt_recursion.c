#include "main.h"

/**
* _sqrt_recursion - Write a function that returns the
* natural square root of a number
*
* @n: Number to find the square root of
* Return: Natural square root of n or -1 if none
*/

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (sqrt_helper(n, 1));
	}
}

/**
* sqrt_helper - Recursively finds the natural square root of n
* @n: Number to find the square root of
* @i: Current candidate for the square root
* Return: Natural square root of n or -1 if none
*/


int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, i + 1));
	}
}
