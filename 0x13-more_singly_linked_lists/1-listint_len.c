#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a
 * linked listint_t list
 * @h: the linked list
 * Return: the counter
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned long int num;

	for (num = 0; temp != NULL; num++)
		temp = temp->next;
	return (num);
}
