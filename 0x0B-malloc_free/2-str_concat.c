#include "main.h"
#include <stdlib.h>

/**
 * str_concat - char func
 * @s1: input
 * @s2: input
 * Return: value or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, f;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	concat = malloc((i + j) * sizeof(char) + 1);

	if (concat == NULL)
	{
		return (NULL);
	}
	for (f = 0; f <= i + j; f++)
	{
		if (f < i)
		{
			concat[f] = s1[f];
		}
		else
		{
			concat[f] = s2[f - i];
		}
	}
	concat[f] = '\0';
	return (concat);
}
