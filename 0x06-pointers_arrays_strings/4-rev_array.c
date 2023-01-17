#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: an input integer
 * @n: an input integer
 * Return:
 */
void reverse_array(int *a, int n)
{
	int num1, num2, hold;

	for (num1 = 0, num2 = n - 1; num2 >= num1; num1++, num2--)
	{
		hold = a[num1];
		a[num1] = a[num2];
		a[num2] = hold;
	}

	num1 = 0;

	while (num1 < n)
		num1++;
}
