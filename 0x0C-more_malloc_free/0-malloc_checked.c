#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: an input unsigned integer
 * Returns: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *num;

	num = malloc(b);

	if (num == NULL)
		exit(98);

	return (num);
}
