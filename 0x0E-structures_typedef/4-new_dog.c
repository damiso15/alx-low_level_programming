#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - a function that creates a new dog
 * @name: an input character
 * @age: an input float
 * @owner: an input character
 * Return: Null if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int len_name, len_owner, i;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	len_name = strlen(name);
	name = malloc(len_name * sizeof(char) + 1);

	if (name == NULL)
		return (NULL);

	for (i = 0; i < len_name; i++)
	{
		name[i] = name[i];
	}
	name[i] = '\0';

	len_owner = strlen(owner);
	owner = malloc(len_owner * sizeof(char) + 1);

	if (owner == NULL)
		return (NULL);

	for (i = 0; i < len_owner; i++)
	{
		owner[i] = owner[i];
	}
	owner[i] = '\0';

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
