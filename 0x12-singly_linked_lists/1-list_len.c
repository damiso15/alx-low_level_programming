#include "lists.h"

/**
 * list_len - a function that prints all the elements of a list_t list
 * @h: the head of the linked list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	unsigned long int num;

	num = 0;
	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
