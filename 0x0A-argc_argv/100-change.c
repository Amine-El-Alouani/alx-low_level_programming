#include <stdio.h>
#include <stdlib.h>

/**
 * int_check
 * @s: input
 * Return: value
 */

int int_check(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - int func
 * @argc: input one
 * @argv: input two
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0, my_c = 0, c = 0;
	int cs[] = {25, 10, 5, 2, 1};

	if (argc != 2) {
		printf("Error\n");
		return (1);
	}
	if (int_check(argv[1]))
	{
		i = atoi(argv[1]);
		while (i > 0 && c <= 4)
		{
			if (i >= cs[c])
			{
				i -= cs[c];
				my_c++;
			}
			else
			{
				c++;
			}
		}
	}
	printf("%i\n", my_c);
	return (0);
}
