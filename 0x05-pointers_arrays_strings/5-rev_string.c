#include "main.h"

/**
 * rev_string - reversed string
 * @s: input val
 * Description: print rev string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int rev;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	for (rev = 0; rev < i / 2; rev++)
	{
		temp = s[rev];
		s[rev] = s[i - rev - 1];
		s[i - rev - 1] = temp;		
	}
}
