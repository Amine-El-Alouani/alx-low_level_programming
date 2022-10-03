#include "main.h"

/**
 * _memcpy - char func
 * @dest: input one
 * @src: input two
 * @n: input three
 * Description: copies memory area
 * Return: value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
