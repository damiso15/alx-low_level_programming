#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array
 * @array: an input array of integer
 * @size: the size of the array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t num;
	int hold;

	if (action == NULL)
		return;

	for (num = 0; num < size; num++)
		{
			hold = array[num];
			action(hold);
		}
}
