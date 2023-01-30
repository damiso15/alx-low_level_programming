#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: the linked list
 *Return: the sum of the linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
