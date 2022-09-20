#include "main.h"
/**
 * _strcpy - char function
 * @dest: char one
 * @src: char two
 * Description: copy string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
