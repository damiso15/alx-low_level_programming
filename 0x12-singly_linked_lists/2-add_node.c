#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head - a  pointer to the head node
 * @str - the string to add to the list
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int size;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	for (size = 0; str[size]; size++)
		continue;

	temp->str = strdup(str);
	temp->len = size;
	temp->next = *head;
	*head = temp;
	return (temp);
}
