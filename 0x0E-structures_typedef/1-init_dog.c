#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @new_dog: pointer to a struct dog variable.
 * @dog_name: name of the dog.
 * @dog_age: age of the dog.
 * @dog_owner: owner of the dog.
 *
 * Return: no return.
 */
void init_dog(struct dog *new_dog, char *dog_name, float dog_age, char *dog_owner)
{
	if (new_dog)
	{
		new_dog->name = dog_name;
		new_dog->age = dog_age;
		new_dog->owner = dog_owner;
	}
}
