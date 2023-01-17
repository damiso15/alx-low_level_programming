#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer
 * @n: an input integer
 * Return: Nothing
 */
void print_number(int n)
{
	int num1, num2, hold;

	num2 = 1;

	if (n >= 0)
		num1 = n * -1;

	else
	{
		num1 = n;
		_putchar('-');
	}

	hold = num1;

	for (; hold <= -10; )
	{
		num2 *= 10, hold /= 10;
	}

	for (; num2 >= 1; )
	{
		_putchar(((num1 / num2) % 10) * -1 + '0');
		num2 /= 10;
	}
}
