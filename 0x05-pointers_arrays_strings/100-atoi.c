#include "main.h"

/**
 * _atoi - int function
 * @s: input value
 * Description: convert string to integer
 * Return: 0
 */

int _atoi(char *s)
{
	int num = 0;
	int len = 0;
	int i;
	int sin = 1;
	int digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
		{
			sin *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = 1;
			num = num * 10 + (s[i] - '0');
		}
		else if (digit)
		{
			break;
		}
	}
	if (sin < 0)
	{
		num = -num;
	}
	return (num);
}
