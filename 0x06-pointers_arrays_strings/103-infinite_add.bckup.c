#include "main.h"
#include <stdlib.h>

/**
 * infinite_add - a function that adds two numbers
 * @n1: an input digit character
 * @n2: an inpu digit character
 * @r: the buffer the function will store the result
 * @size_r: the size of the buffer
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1, num2, num3;

	num1 = num2 = num3 = 0;

	if ((n1[0] - '0') + (n2[0] - '0') >= 10)
	{
		r[0] = 1 + '0';
		num2 = 1;
	}

	for (num1 = 0, num2 = 0; num1 < size_r && (n1[num1] != '\0' || n2[num1] != '\0' || r[num2] != '\0'); num1++, num2++)
	{
		if ((n1[num1 + 1] - '0') + (n2[num1 + 1] - '0') >= 10)
			num3 = 1;
		else
			num3 = 0;

		r[num2] = ((n1[num1] - '0') + (n2[num1] - '0') >= 10);
		r[num2] = r[num2] % 10 + '0';

		if (n1[num1] == '\0' || n2[num1] == '\0')
			r[num2] = '\0';
	}
	r[num2] = '\0';
	return (r);
}
