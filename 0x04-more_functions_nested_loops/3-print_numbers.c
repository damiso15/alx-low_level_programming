#include "main.h"

/**
 * print_numbers - A function that prints 0 to 9
 * Return: Always 0 as Success
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		_putchar(a);
	_putchar('\n');
}
