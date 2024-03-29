#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - a new type struct dog
 * @name: an element for the name of the dog
 * @age: an element for the age of the dog
 * @owner: an element for the owner of the dog
 *
 * Description: none
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - a typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
