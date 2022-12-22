#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: a pointer to the resulting dest dtring
 */
char *_strncat(char *dest, char *src, int n)
{
	int num = 0, len = 0;

	for (; dest[len] != '\0'; len++)
	{
		continue;
	}
	for (; num < n && src[num] != '\0'; num++)
		dest[len + num] = src[num];
	dest[len + num] = '\0';

	return (dest);
}
