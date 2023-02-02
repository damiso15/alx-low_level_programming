#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: an input integer
 * return: Nothing
 */
void print_binary(unsigned long int n)
{
	int num;
	unsigned long int temp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	num = 0, temp = n;
	while ((temp >>= 1) > 0)
		num++;

	while (num >= 0)
		_putchar((n >> num--) & 1 ? '1' : '0');
}
