#include "main.h"
#include <stdio.h>

/**
 * _strlen - string length
 * @s: input value
 * Description: calcul string length
 * Return: nothing
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
