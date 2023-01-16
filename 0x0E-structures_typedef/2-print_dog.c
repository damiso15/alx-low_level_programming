#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: an input pointer to the struct dog
 * Return: Nothing;
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil");
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
