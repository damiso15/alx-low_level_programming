#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a linked
 * @h:  pointer to the head of the list
 * Return: the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return count;
}

