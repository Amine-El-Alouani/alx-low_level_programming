#include "main.h"

/**
 * _strpbrk - char function
 * @s: input one
 * @accept: input two
 * Description: search to match strings
 * Return: value
 */

char *_strpbrk(char *s, char *accept)
{
	int i, f;
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
