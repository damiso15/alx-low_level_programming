#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 *  and initializes it with a specific char
 *  @size: the array size
 *  @c: the initialized character
 *  Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n = 0;

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	else if (size != 0)
	{
		while (n < size)
		{
			str[n] = c;
			n++;
		}
		return (str);

	}

	else
		return (NULL);
}
