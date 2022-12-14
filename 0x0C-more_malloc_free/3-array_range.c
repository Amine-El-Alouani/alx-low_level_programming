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
	int *s;

	if (min > max)
	{
		return (NULL);
	}

	s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; min + i <= max; i++)
	{
		s[i] = min + i;
	}
	return (s);
}
