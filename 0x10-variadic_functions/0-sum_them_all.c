#include "variadic_functions.h"

/**
 * sum_then_all - int func
 * @n: param
 * Return: value
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, unsigned int);
	}

	return sum;
}
