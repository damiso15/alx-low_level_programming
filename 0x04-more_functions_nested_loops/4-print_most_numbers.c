#include "main.h"

/**
 * print_most_numbers - A function that prints 0 to 9 without 2 and 4
 * Return: Always 0 as Success
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
			_putchar(a);
	}
	_putchar('\n');
}
