#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head, *new;
	size_t num1, num2;

	num1 = 0;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		num1++;
		temp = temp->next;
		new = head;

		num2 = 0;
		while (num2 < num1)
		{
			if (temp == new)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (num1);
			}
			new = new->next;
			num2++;
		}
	}
	return (num1);
}
