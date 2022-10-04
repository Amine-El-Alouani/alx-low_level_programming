#include "main.h"
#include <stdlib.h>

/**
 * _strdup - char func
 * @str: input
 * Return: NULL or value
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *st;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	st = malloc(i * sizeof(char));

	if (st == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		st[j] = str[j];
	}

	return (st);
}
