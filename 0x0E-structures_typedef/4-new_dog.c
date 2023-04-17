#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog struct variable.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: a pointer to a new dog struct variable.
 * If fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	size_t name_len = strlen(name) + 1, owner_len = strlen(owner) + 1;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(name_len);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(owner_len);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	memcpy(new_dog->name, name, name_len);
	new_dog->age = age;
	memcpy(new_dog->owner, owner, owner_len);

	return (new_dog);
}
