#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list
 * @head: the linked list
 * @index: the index of the node starting at 0
 * Return: the node at the index or NULL if node doesn't exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int counter;

	if (head == NULL)
		return (NULL);

	temp = head;
	counter = 0;
	while (temp != NULL)
	{
		if (counter == index)
			return (temp);
		counter++;
		temp = temp->next;
	}
	return (NULL);

}
