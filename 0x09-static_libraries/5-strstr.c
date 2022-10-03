#include "main.h"
/**
 * _strstr - char func
 * @haystack: input one
 * @needle: input two
 * Description: locates a substring
 * Return: value
 */

char *_strstr(char *haystack, char *needle)
{
	int i, f;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (f = i; haystack[f] > '\0' && needle[f - i] > '\0'; f++)
		{
			if (haystack[f] != needle[f - i])
			{
				break;
			}
		}
	}
	if (needle[f - i] == '\0')
	{
		return (haystack + i);
	}
	return (0);
}
