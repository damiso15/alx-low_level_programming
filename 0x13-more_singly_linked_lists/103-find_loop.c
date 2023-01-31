#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: the linked list 
 * Return: the address of the node where the loop starts, or NULL
 * if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head, *new = head;

	while (temp && new && new->next)
	{
		temp = temp->next;
		new = new->next->next;
		if (temp == new)
		{
			return (temp);
		}
	}
	return (NULL);
}
