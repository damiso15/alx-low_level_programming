#include "main.h"

/**
 * is_prime_number - a function that checks if a number is prime
 * @n: an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (divide(n, i));
}

/**
 * divide - a function
 * @a: an input integer
 * @i: an recursive integer
 * Return: 1 if num is divisible or 0 otherwise
 */
int divide(int a, int i)
{
	if (a % i == 0)
		return (0);

	if (i == a / 2)
		return (1);

	return (divide(a, i + 1));
}
