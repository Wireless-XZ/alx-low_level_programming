#include <string.h>
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
	char *a, *b;
	int i, j;
	dog_t *x = malloc(sizeof(dog_t));

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;

	a = malloc(sizeof(char) * (i + 1));
	strcpy(a, name);

	b = malloc(sizeof(char) * (j + 1));
	strcpy(b, owner);

	if (x == NULL)
		return (NULL);

	x->name = name;
	x->age = age;
	x->owner = owner;

	return (x);
}
