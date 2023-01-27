#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: a  pointer to the head node
 * @str: the string to add to the list
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;
	int size;

	new = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	for (size = 0; str[size]; size++)
		continue;

	temp->str = strdup(str);
	temp->len = size;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (new->next != NULL)
		new = new->next;
	new->next = temp;
	return (temp);
}
