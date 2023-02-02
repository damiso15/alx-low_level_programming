#include "main.h"

/**
 * get_endianness - a function that checks thez endianness
 * 
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num;
	char *c;

	num = 1;
	c = (char*)&num;
	return (int)*c;
}
