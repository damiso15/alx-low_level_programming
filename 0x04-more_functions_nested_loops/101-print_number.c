#include "main.h"

void print_integer(int a);

/**
 * print_number - a function that prints an integer
 * @n: an input integer
 * Return: Always 0 as Success
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - a function that prints n
 * @a: an input unsigned integer
 * Return: Always 0 as Success
 */
void print_integer(int a)
{
	int num = 1000000000;

	for (; num >= 1; num /= 10)
		if (a / num != 0)
		{
			_putchar((a / num) % 10 + '0');
		}
}
