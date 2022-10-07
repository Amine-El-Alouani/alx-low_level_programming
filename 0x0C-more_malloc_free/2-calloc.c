#include "main.h"
#include <stdlib.h>

/**
 * _calloc - void func
 * @nmemb: input
 * @size: input
 * Return: NULL or value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(size * nmemb);

	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = 0;
	}
	return (a);
}
