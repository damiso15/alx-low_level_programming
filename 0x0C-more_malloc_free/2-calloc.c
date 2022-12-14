#include "main.h"
#include <stdlib.h>

/**
 * void *_calloc - a function that allocates memory for an array, using malloc
 * @nmemb: an input array
 * @size: an input integer of size for the array
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(size * nmemb);

	if (str == NULL)
		return (NULL);

	for (n = 0; n < nmemb * size; n++)
		str[n] = 0;

	return (str);

}
