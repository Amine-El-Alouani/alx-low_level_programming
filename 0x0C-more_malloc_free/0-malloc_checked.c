#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - void func
 * @b: input
 * Return: pointer or 98
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (s);
}
