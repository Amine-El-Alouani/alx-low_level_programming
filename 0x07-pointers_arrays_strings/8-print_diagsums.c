#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - void func
 * @a: input one
 * @size: input two
 * Description: prints the sum of the two diagonals
 * Return: value
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	for (i = 0; i < size; i++)
	{
		a -= size;
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
