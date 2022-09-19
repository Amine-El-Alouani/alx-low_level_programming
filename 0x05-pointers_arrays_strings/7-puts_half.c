#include "main.h"

/**
 * puts_half - void function
 * @str: input value
 * Description: prints the second half of string
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = 0;
	int i;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) != 0)
	{
		n = (len - 1) / 2;
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = len / 2;
		for (i = n + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
