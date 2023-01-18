#include "3-calc.h"

/**
 * op_add - a program that contains functions that performs addition
 * @a: an input integer
 * @b: an input integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a program that contains functions that performs substraction
 * @a: an input integer
 * @b: an input integer
 * Return: the sum of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a program that contains functions that performs multiplication
 * @a: an input integer
 * @b: an input integer
 * Return: the sum of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a program that contains functions that performs division
 * @a: an input integer
 * @b: an input integer
 * Return: the sum of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	else
		return (a / b);
}

/**
 * op_mod - a program that contains functions that performs modulo
 * @a: an input integer
 * @b: an input integer
 * Return: the sum of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	else
		return (a + b);
}

