#include "main.h"
#include <stdlib.h>

/**
 * _strdup - char func
 * @str: input
 * Return: NULL or value
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j;
	char *st;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	st = malloc(i * sizeof(char) + 1);

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
