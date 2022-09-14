#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers
 * @n: natural number
 * Description: Prints all
 * Return: value
 */

void print_to_98(int n)
{
	while(n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while(n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	printf("\n");
}
