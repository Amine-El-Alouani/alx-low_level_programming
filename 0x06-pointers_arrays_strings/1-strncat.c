#include "main.h"

/**
 * _strncat - void func
 * @dest: input one
 * @src: input two
 * @n: input three
 * Description: string cat
 * Return: value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
