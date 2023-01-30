#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * of a listint_t linked list
 * @head: the linked list
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new;
	unsigned int counter;

	if (*head == NULL)
		return (-1);

	temp = *head;
	new = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (-1);
	}

	for (counter = 0; temp->next != NULL; counter++)
	{
		if (counter == index)
		{
			new->next = temp->next;
			free (temp);
			return (1);
		}
		new = temp;
		temp = temp->next;
	}
	if (counter == index)
	{
		new->next = NULL;
		free(temp);
		return (1);
	}
	return (-1);
}
