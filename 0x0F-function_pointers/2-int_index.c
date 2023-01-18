#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * @array: an input of array of integers
 * @size: is the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element otherwise -1 if no element
 * matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int num, hold;

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	if (array == NULL)
		return (-1);

	for (num = 0; num < size; num++)
	{
		hold = array[num];

		if (cmp(hold))
			return (num);
	}
	return (-1);
}
