#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x = malloc(sizeof(dog_t));

	if (x == NULL)
		return (NULL);

	x->name = name;
	x->age = age;
	x->owner = owner;

	return (x);
}
