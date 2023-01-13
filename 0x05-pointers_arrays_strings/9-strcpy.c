#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: a pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int num;

	for (num = 0; src[num] != '\0'; num++)
		dest[num] = src[num];

	dest[num] = '\0';
	return (dest);
}
