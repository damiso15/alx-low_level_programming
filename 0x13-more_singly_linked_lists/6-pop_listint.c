#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: the linked list
 * Return: the address of the new element
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	num = 0;
	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	num = temp->n;
	free(temp);
	return (num);
}
