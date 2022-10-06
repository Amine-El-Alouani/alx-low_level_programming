#include "main.h"
#include <stdlib.h>

/**
 * _strlen - int func
 * @str: input
 * Return: int
 */

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - char func
 * @s1: input
 * @s2: input
 * @n: input
 * Return: NULL or pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, i, f;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = _strlen(s1);
	j = _strlen(s2);
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
	{
		n = j;
	}
	s = malloc(sizeof(char) * (i + n) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (f = 0; f < i + n; f++)
	{
		if (f < i)
		{
			s[f] = s1[f];
		}
		else
		{
			s[f] = s2[f - i];
		}
	}
	s[f] = '\0';
	return (s);
}
