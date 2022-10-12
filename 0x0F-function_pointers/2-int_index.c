#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - int func
 * @array: param
 * @size: param
 * @cmp: param
 * Return: value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
