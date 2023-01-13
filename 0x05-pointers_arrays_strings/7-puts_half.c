#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: an input str
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0, half, num;

	for (; str[len] != '\0'; len++)
		continue;		

	if (len % 2 == 0)
		half = len / 2;

	else
		half = (len + 1) / 2;

	for (num = half; num < len; num++)
		_putchar(str[num]);

	_putchar('\n');
}
