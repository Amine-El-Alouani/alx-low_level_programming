#include "main.h"

/**
 * _strpbrk - char function
 * @s: input one
 * @accept: input two
 * Description: search a string for any of a set of bytes
 * Return: value
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int f;
	char *x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (f = 0; accept[f] !='\0'; f++)
		{
			if (s[i] == accept[f])
			{
				x = &s[i];
				return (x);
			}
		}
	}
	return ('\0');
}
