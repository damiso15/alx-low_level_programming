#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: the linkedlist
 * Return: the numbe of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned long int num;

	for (num = 0; temp != NULL; num++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (num);
}

