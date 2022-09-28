#include "main.h"

/**
 * _pow_recursion - int func
 * @x: input one
 * @y: input two
 * Return: num
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
