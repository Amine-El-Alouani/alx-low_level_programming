#include "dog.h"
#include <stdio.h>

/**
 * init_dog - void func
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
