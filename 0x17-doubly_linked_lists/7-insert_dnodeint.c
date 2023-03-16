#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the doubly linked list
 * @idx: index where the new node should be added
 * @n: value to be stored in the new node
 *
 * Return: Address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1; i++)
	{
		if (!tmp)
			return (NULL);

		tmp = tmp->next;
	}

	if (!tmp->next && idx != i + 1)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	new_node->prev = tmp;
	new_node->next = tmp->next;

	if (tmp->next)
		tmp->next->prev = new_node;

	tmp->next = new_node;

	return (new_node);
}

