#include "main.h"

/**
* _pow_recursion - Returns the value of x raised to the power of y 
* @x: the number
* @y: the exponent
* Return: x raised to the power of y or -1 is y 
* is lower than 0
*/

int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1);
    }
    else if (y == 0)
    {
        return (1);
    }
    else
    {
        return (x * _pow_recursion(x, y - 1));
    }
}
