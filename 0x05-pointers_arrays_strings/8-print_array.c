#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of
 * integers, followed by a new line
 * @a: first input integer
 * @n: second input integer
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int arr = 0;

	for (; arr < n; arr++)
	{
		printf("%d", a[arr]);
		if (arr < n - 1)
			printf(", ");
	}
	putchar ('\n');
}
