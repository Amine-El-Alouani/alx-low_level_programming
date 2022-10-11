#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - void func
 * @d: input
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

free(d->owner);
free(d->name);
free(d);
}
