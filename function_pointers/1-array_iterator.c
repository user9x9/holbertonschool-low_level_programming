#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - Executes a function on each elements of an array
* @array: Pointer to the array of integers
* @size: Number of elements in the array
* @action: Pointer to a function that takes an int and returns void
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i = 0;

    if (array == NULL || action == NULL)
        return;

    while (i < size)
    {
        action(array[i]);
        i++;
    }
}