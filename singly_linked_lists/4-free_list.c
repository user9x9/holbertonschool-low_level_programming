#include "lists.h"

/**
 * free_list - Frees a linked list of type list_t
 * @head: Pointer to the head of the list
 * Description: Traverses the list and frees each node's string
 * and the node itself to avoid memory leaks.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
