#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: input integer for the minimum
 * @max: input integer for the maximum
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int n;
	int *str;

	if (min > max)
		return (NULL);

	str = malloc(sizeof(int) * (max + 1));

	if (str == NULL)
		return (NULL);

	for (n = 0; n <= max; n++)
		str[n] = min++;

	return (str);
}
