#include "main.h"
#include <stdlib.h>

/**
 * void *_calloc - a function that allocates memory for an array, using malloc
 * @memb: an input array
 * @size: an input integer of size for the array
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *str;

	str = malloc(nmemb);

	if (str == NULL)
		return (NULL);

	if (nmemb == 0 || size == 0)
		return (NULL);

	else
	{
		for (n = 0; n < nmemb; n++)
			str[n] = 0;
	}
	return (str);

}
