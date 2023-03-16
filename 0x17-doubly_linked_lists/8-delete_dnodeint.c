#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a 
 * dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = NULL;
	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	if (prev == NULL)
	{
		*head = current->next;
		if (*head != NULL)
		(*head)->prev = NULL;
	}
	else
	{
		prev->next = current->next;
		if (prev->next != NULL)
			prev->next->prev = prev;
	}

	free(current);
	return (1);
}

