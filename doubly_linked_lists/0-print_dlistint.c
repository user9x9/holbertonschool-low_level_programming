#include "lists.h"

/**
* print_dlistint - Prints all the elements of a dlistint_t list
* @h: Pointer to the first node of the list
* Return: The number of nodes in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int tmp = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		tmp++;
		current = current->next;
	}
	return (tmp);
}
