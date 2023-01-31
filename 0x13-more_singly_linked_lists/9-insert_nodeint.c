#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a
 * given position
 * @head: the linked list
 * @idx: the index of the list where the new node should be
 * added. Index starts at 0
 * @n: the element to add to the linked list
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *prev;
	unsigned int counter;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	prev = *head;
	counter = 0;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (counter == idx)
		{
			new->next = temp;
			prev->next = new;
			return (new);
		}
		prev = temp;
		temp = temp->next;
		counter++;
	}
	if (idx == counter)
	{
		prev->next = new;
		return (new);
	}

	free(new);
	return (NULL);
}
