#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: an input string
 * Return: nothing
 */
void _puts(char *str)
{
	int len = 0;

	for (; str[len] != '\0'; )
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
