#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: an input integer
 * @b: an input integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
