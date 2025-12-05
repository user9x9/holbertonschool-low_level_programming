#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the doubly linked list
 * @idx: The index where the new node should be added
 * @n: The value to store in the new node
 * Return: The address of the new node or NULL if it failed or if
 * the index is not valid (out of range)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;

	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));

		if (new == NULL)
			return (NULL);
		
		new->n = n;
		new->prev = NULL;
		new->next = *h;

		if (*h != NULL)
			(*h)->prev = new;
		
		*h = new;
		return (new);
	}
	tmp = *h;
	while (tmp != NULL && i < index - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;

	if (tmp->next != NULL)
		tmp->next->prev = new;

	tmp->next = new;
	return (new);
}
