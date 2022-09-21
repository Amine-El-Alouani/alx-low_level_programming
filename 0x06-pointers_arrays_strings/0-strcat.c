#include "main.h"

/**
 * _strcat - void func
 * dest: input one
 * src: input two
 * Description: concat strings
 * Return: value
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
