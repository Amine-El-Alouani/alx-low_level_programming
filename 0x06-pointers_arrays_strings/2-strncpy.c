#include "main.h"

/**
 * _strncpy - void func
 * @dest: input one
 * @src: input two
 * @n: input three
 * Description: copy string
 * Return: value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
