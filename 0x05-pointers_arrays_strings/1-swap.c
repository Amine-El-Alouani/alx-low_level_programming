#include "main.h"

/**
 * swap_int
 * @a: first input
 * @b: second input
 * Description: swap integers
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
