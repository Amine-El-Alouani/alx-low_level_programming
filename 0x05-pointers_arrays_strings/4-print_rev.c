#include "main.h"

/**
 * print_rev - print reversed string
 * @s: input value
 * Description: print rev val
 * Return: none
 */
void print_rev(char *s)
{
	int i = 0;
	int rev;

	while (s[i] != '\0')
	{
		i++;
	}
	for (rev = i - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
