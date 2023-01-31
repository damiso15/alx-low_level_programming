#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: the linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *next;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = next;
	}
	*head = temp;
	return (*head);
}
