#include "main.h"

/**
 * print_line - A functon that draws a straight line in the terminal
 * @n: an input integer
 * Return: Always 0 as Success
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		for (; a < n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
