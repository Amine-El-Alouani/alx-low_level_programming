#include "main.h"

/**
 * print_numbers - print numbers from 0 to 10
 * Description: func return numbs
 * Return: nums
 */

void print_numbers(void)
{
	int i = 0;
	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
