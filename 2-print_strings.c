#include "variadic_functions.h"

/**
 * print_strings - main func
 * @separator: param
 * @n: param
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *val;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			val = va_arg(args, char*);
			if (val == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", value);
			}
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(args);
	}
}
