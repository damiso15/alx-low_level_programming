#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: an input integer
 * @n: an input integer
 * Return:
 */
void reverse_array(int *a, int n)
{
	int num, hold;

	num = hold = 0, n -= 1;

	for (; num <= n; num++, n--)
	{
		hold = a[n];
		a[n] = a[num], a[num++] = hold;
	}
}
