#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory allocated for a dog struct variable.
 *
 * @dog_ptr: pointer to the dog struct variable.
 *
 * Return: void.
 */
void free_dog(dog_t *dog_ptr)
{
	if (dog_ptr)
	{
		free(dog_ptr->name);
		free(dog_ptr->owner);
		free(dog_ptr);
	}
}
