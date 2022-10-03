#include "main.h"
#include <stdlib.h>

/**
 * create_array - char func
 * @size: input
 * @c: input
 * Return: NULL or pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(c));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
