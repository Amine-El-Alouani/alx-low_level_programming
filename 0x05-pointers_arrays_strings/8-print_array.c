#include "main.h"

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
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(a[i]);
		}
	}
	_putchar('\n');
}
