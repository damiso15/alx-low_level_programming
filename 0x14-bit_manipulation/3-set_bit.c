#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: an input integer
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	num = 0x01;
	num <<= index;
	if (num == 0)
		return (-1);
	*n |= num;
	return (1);
}
