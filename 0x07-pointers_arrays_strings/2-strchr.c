#include "main.h"
#include <stddef.h>

/**
 * _strchr - char func
 * @s: input one
 * @c: input two
 * Description: locates a character in a string
 * Return: value
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
