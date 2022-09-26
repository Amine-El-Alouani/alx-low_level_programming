#include "main.h"
#include <stdio.h>

/**
 * _memset - char func
 * @s: input one
 * @b: input two
 * @n: input three
 * Description: fill memory with constant byte
 * Return: value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
