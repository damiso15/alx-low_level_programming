#include "main.h"

/**
 * _sqrt_recursion - a function that returns the value of root of n.
 * @n: an input integer
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (nat_sqrt(1, n));
}

/**
 * nat_sqrt - a function that finds square root
 * @cons: an input integer
 * @var:  an input intger we finding the root
 * Return: the root
 */
int nat_sqrt(int cons, int var)
{
	if (cons > var)
		return (-1);
	else if (cons * cons == var)
		return (cons);
	return (nat_sqrt(cons + 1, var));
}
