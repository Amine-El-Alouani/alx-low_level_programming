#include "main.h"

/**
 * _strchr - char funcition
 * @s: input one
 * @c: input two
 * Description: locates a character in a string
 * Return: value
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
