#include "main.h"
/**
 * print_triangles - func of printing triangles
 * @size: input value
 * Description: Triangles
 * Return: none
 */

void print_triangle(int size)
{
	int i, n;
	int z = size - 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size; n++)
			{
				if (n < z)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			z--;
			_putchar('\n');
		}
	}
}
