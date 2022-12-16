#include "main.h"
void putformat(int n);

/**
 * print_times_table - a function that prints the n times table, starting with 0.
 * @n: an input integer value
 * Retrun: Always 0 as asuccess
 */
void print_times_table(int n)
{
	int a, b;

	if (n > 0 && n < 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
				putformat(a * b);
			_putchar('\n');
		}
	}
}

/**
 * putformat - a function that pints formatted characters to output
 * @n: the integer to format
 * Return: Always 0 as success
 */
void putformat(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n /10 % 10 + '0');
		_putchar(n % 10 + 10);
	}
}
