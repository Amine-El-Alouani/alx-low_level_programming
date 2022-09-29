#include "main.h"

/**
 * check_num - int func
 * @f: input one
 * @n: input two
 * Description: check number
 * Return: binary
 */

int check_num(int f, int n)
{
	if (f == n)
	{
		return (1);
	}
	if (n <= 1)
	{
		return (0);
	}
	if (n % f == 0)
	{
		return (0);
	}
	return (check_num(f + 1, n));
}

/**
 * is_prime_number - int function
 * @n: input
 * Description check number
 * Return; binary
 */

int is_prime_number(int n)
{
	return(check_num(2, n));
}
