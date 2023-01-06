#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: a pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	char *hold = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (hold);
}
