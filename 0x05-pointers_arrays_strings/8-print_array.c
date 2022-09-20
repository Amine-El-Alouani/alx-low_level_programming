#include "main.h"
#include <stdio.h>

/**
 * print_array - void function
 * @a: input one
 * @n: input two
 * Description: prints array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
