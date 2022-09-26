#include "main.h"

/**
 * _strchr - char func
 * @s: input one
 * @c: input two
 * Description: locates a character in a string
 * Return: value
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; s++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
