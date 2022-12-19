#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line
 * @s: an input string
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0;

	for (; s[len] != '\0' ; )
	{
		len++;
	}
	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
