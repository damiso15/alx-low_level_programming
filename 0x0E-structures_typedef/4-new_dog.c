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
	dog_t *new_dog;
	int len_name, len_owner, i;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	len_name = strlen(name);
	new_dog->name = malloc(len_name * sizeof(char) + 1);

	if (new_dog->name == NULL)
		return (NULL);

	for (i = 0; i < len_name; i++)
		new_dog->name[i] = name[i];

	new_dog->name[i] = '\0';

	len_owner = strlen(owner);
	new_dog->owner = malloc(len_owner * sizeof(char) + 1);

	if (new_dog->owner == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_owner; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->owner[i] = '\0';

	new_dog->age = age;
	return (new_dog);
}
