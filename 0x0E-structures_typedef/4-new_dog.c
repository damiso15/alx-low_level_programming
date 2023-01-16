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
	char *new_name, *new_owner;
	int len_name, len_owner, i;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	len_name = strlen(name);
	new_name = malloc(len_name * sizeof(char) + 1);

	if (new_name == NULL)
	{
		free(new_name);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
	{
		new_name[i] = name[i];
	}
	new_name[i] = '\0';

	len_owner = strlen(owner);
	new_owner = malloc(len_owner * sizeof(char) + 1);

	if (new_owner == NULL)
	{
		free(new_owner);
		return (NULL);
	}

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
