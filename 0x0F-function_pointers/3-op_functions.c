#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - int func
 * @a: param
 * @b: param
 * Return: value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - int func
 * @a: param
 * @b: param
 * Return: value
 */

int op_sub(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - int func
 * @a: param
 * @b: param
 * Return: value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - int func
 * @a: param
 * @b: param
 * Return: value
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - int func
 * @a: param
 * @b: param
 * Return: value
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
