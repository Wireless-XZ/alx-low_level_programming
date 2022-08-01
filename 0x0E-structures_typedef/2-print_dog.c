#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (!d)
		putchar('\0');
	else
	{
		if (!d->name)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);

		if (!(d->age))
			printf("(nil)");
		else
			printf("Age: %f\n", d->age);

		if (!d->owner)
			printf("(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
