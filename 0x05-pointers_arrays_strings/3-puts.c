#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string
 * @str: input value
 * Description: write a string
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
