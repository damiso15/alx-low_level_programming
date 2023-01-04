#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: an input pf square matrix
 * @size: an input integer of the matrix size
 * @Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int num = 0, max = size * size, num2 = 0, num3 = 0;

	while (num < max)
	{
		num2 += a[num];
		num += size + 1;
	}

	num = size - 1;
	while (num < max -1)
	{
		num3 += a[num];
		num += size -1;
	}

	printf("%d, %d\n", num2, num3);
}
