#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check - int func
 * @num: input
 * Return: 0 or -1
 */

int check(char num[])
{
	int i = 0;

	if (num[0] == '0')
	{
		i = 1;
	}
	while (num[i] != 0)
	{
		if (!isdigit(num[i]))
		{
			return (-1);
		}
	i++;
	}
	return (0);
}

/**
 * main - int func
 * @argc: input one
 * @argv: input two
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (check(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
