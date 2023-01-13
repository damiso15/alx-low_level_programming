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
	int len, count, remain, pow, counter, m;

	for (len = 0; n != 0; len++)
	{
		n /= 10;
	}

	for (pow = 1; counter < (len - 1); counter++)
	{
		pow *= 10;
	}

	m = n;

	for  (count = 0; count < len; counter++)
	{
		a = m;
		if (m < 0)
			_putchar(((m / pow) * -1) + '0');
		else
			_putchar((m / pow) + '0');

		remain = a % pow;
		pow /= 10;
		m = remain;
	}
}
