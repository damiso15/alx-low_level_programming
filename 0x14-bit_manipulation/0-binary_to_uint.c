#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: Return the converted number or 0 if b is null or not '0 and 1'
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, dec, digit;

	if (b == NULL)
		return (0);

	num = dec = digit = 0;
	while (b[num])
	{
		if (b[num] != '0' && b[num] != '1')
			return (0);

		dec <<= 1;
		if (b[num] == '1')
			dec ^= 1;
		num++;
	}
	return (dec);
}
