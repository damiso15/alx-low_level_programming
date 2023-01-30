#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of
 * a listint_t list
 * @head: the linked list
 * @n: the integer to add to the linked list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	new = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (new->next != NULL)
		new = new->next;
	new->next = temp;
	return (temp);
}
