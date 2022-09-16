#include "main.h"
/**
 * print_diagonal - func of printing
 * @n: input
 * Description: printing diagonal is nice.
 * Return: none
 */
void print_diagonal(int n)
{
	int i, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (p = i; p > 0; p--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
