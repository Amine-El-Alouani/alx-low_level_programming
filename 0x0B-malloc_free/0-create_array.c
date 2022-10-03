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
	unsigned int i = 0;
	char *s = malloc(size * sizeof(c));

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
