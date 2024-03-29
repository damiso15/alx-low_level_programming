#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: an input integer
 * @m: second integer
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum;
	unsigned long int flip;

	sum = 0;
	flip = n ^ m;
	while (flip)
	{
		sum += flip & 1;
		flip >>= 1;
	}
	return (sum);
}
