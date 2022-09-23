#include "main.h"

/**
 * cap_string - char function
 * @c: input value
 * Description: cap string
 * Return: value
 */

char *cap_string(char *s)
{
	int i, j, f;
	char s_chars[] = {' ', '\n', '\t', '.', ';', '!', '?', '"', '(', ',', ')', '{', '}', };

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		for (f = 0; f < 13; f++)
		{
			if (s[j] == s_chars[f]){	
				if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
				{
					s[j + 1] -= 32;
				}
			}
		}
	}
	s[i] = '\0';
	return (s);
}
