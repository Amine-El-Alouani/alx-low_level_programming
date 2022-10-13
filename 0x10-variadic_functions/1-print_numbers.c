#include "variadic_functions.h"

/**
 * print_numbers - void func
 * @separator: param
 * @n: param
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (separator != NULL)
	{
		va_start(ptr, n);

		for (i = 0; i < n; i++)
		{
			int val = va_arg(ptr, int);

			printf("%d", val);
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(ptr);
	}
}
