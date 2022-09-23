#include "main.h"

/**
 * string_toupper - char function
 * @c: input val
 * Description: string to upper
 * Return: value
 */
char *string_toupper(char *c)
{
	int i,len;

	len = 0;
	while (c[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (c[i] <= 122 && c[i] >= 97)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
	_putchar('\n');
}
