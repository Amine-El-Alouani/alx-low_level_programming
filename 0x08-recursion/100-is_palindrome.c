#include "main.h"

/**
 * last - int func
 * @s: input
 * Return: value
 */

int last(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += last(s + 1) + 1;
	}
	return (n);
}

/**
 * is_palindrome - int func
 * @s: input
 * Return: 1 or 0;
 */

int is_palindrome(char *s)
{
	int e = last(s);

	return (check(s, 0, e - 1, e % 2));
}

/**
 * check - int func
 * @s: input one
 * @str: input two
 * @end: input three
 * @p: input four
 * Return: 0 or 1
 */

int check(char *s, int str, int end, int p)
{
	if ((str == end && p != 0) || (str == end + 1 && p == 0))
	{
		return (1);
	}
	else if (s[str] != s[end])
	{
		return (0);
	}
	else
	{
		return (check(s, str + 1, end - 1, p));
	}
}
