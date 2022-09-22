#include "main.h"
#include <stdio.h>

/**
 * reverse_array - void func
 * @a: input one
 * @n: input two
 * Description: reverse function
 * Return: value
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0; i < n/2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
	for (j = 0; j < n; j++)
	{
		if(j != (n - 1))
		{
			printf("%d, ", a[j]);
		}
		else
		{
			printf("%d", a[j]);
		}
	}
	printf("\n");
}
