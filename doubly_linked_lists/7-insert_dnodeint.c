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
	dlistint_t *tmp = *h, *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	if (tmp->next == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;

	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
