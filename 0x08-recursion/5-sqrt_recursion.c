#include "main.h"

/**
 * s_root - int func
 * @i: int
 * @n: int
 * Return: int
 */

int s_root(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (s_root(i + 1, n));
}
/**
 * _sqrt_recursion - int func
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (s_root(1, n));
}
