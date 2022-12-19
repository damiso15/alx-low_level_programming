#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: an input string
 * Return: nothing
 */
int _strlen(char *s)
{
	int len = 0;

	for (; s[len] != '\0'; len++)
		continue;
	return (len);
}
