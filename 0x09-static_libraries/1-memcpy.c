# include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: an input pointer
 * @src: an input pointer
 * @n: an input integer
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
