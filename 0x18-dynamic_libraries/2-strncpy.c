#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: a pointer to the resulting dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num = 0;

	for (; num < n && src[num] != '\0'; num++)
		dest[num] = src[num];
	for (; num < n; num++)
		dest[num] = '\0';

	return (dest);
}
