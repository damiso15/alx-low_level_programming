#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @head: the linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h, *new;
	size_t counter;

	if (!h)
		return (0);

	counter = 0;
	while (temp != NULL)
	{
		counter++;
		new = temp;
		temp = temp->next;
		free(new);

		if (new < temp)
			break;
	}
	*h = NULL;
	return (counter);
}
