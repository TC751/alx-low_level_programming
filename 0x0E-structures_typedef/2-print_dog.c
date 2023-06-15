#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the details of a struct dog.
 * @dog: pointer to a struct dog.
 *
 * Return: no return.
 */
void print_dog(struct dog *dog)
{
	if (dog)
	{
		if (dog->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", dog->name);

		printf("Age: %f\n", dog->age);

		if (dog->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", dog->owner);
	}
}
