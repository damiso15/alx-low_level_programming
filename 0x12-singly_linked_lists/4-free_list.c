#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: the head of the linked list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
