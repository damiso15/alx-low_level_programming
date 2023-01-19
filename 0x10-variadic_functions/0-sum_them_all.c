#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: an input unsigned constant integer
 * Return: 0 as Success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int num1, sum;

	va_start(ap, n);

	sum = 0;
	for (num1 = 0; num1 < n; num1++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
