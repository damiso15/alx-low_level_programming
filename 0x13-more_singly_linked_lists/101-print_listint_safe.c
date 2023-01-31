#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head, *new;
	size_t sum1, sum2;

	for (sum1 = 0; temp; sum1++)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		new = head;

		for (sum2 = 0; sum2 < sum1; sum2++)
		{
			if (temp == new)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (sum1);
			}
			new = new->next;
		}
	}
	return (sum1);
}
