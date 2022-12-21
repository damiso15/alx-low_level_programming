#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: an input integer
 * @n: an input integer
 * Return:
 */
void reverse_array(int *a, int n)
{
	int num =  n / 2, l, r, i;

	n -= 1;

	for (i = 0; i < num; i++)
	{
		l = a[n -1];
		r = a[i];
		a[i] = l;
		a[n -i] = r;
	}
}
