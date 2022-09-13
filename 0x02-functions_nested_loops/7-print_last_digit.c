#include "main.h"
/**
 * print_last_digit - print the last one
 * @n: check the last digit
 * Description: lets check it
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * (n % 10);
	}
	else
	{
		n = n % 10;
	}
	_putchar(n + '0');
	return (n);
}
