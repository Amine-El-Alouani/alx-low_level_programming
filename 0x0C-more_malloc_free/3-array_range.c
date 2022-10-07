#include "main.h"
#include <stdlib.h>

/**
 * array_range - int func
 * @min: input
 * @max: input
 * Return: value or NULL
 */

int *array_range(int min, int max)
{
	int i;
	int  *s;

	if (min > max)
	{
		return (NULL);
	}

	s = malloc(sizeof(int) * (max - min) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		s[i] = i;
	}
	s[i] = '\0';
	return (s);
}
