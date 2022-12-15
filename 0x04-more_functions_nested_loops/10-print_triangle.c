#include "main.h"

/**
 * print_triangle - A function that prints a triangle, followed by a new line
 * @size: an input integer
 * Return: Always 0 as Success
 */
void print_triangle(int size)
{
	int a, b, n = size - 1;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < n)
					_putchar(' ');
				else
					_putchar(35);
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
