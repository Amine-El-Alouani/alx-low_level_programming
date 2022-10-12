#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - void func
 * @array: param
 * @size: param
 * @action: param
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
