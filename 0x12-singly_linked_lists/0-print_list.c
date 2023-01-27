#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: the head of the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	unsigned long int num;

	num = 1;
	if (temp == NULL)
		printf("[0] (nil)\n");

	else
	{
		while (temp != NULL)
		{
			printf("[%d] %s\n", temp->len, temp->str);
			temp = temp->next;
		}
		num++;
	}
	return (num);
}
