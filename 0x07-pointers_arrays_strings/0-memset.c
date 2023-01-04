#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: an input string array
 * @b: an input constant byte
 * @n: an input number of bytes
 * Return: pointer string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
