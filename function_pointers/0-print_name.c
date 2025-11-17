#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - Function that prints a name
* @name: Name
* @f: Pointer to a function that takes a char* and returns void
* Description: This function checks if the function pointer is not NULL
* and then calls the function pointed to with the given name
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
