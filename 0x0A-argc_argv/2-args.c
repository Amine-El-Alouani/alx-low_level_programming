#include <stdio.h>

/**
 * main - int func
 * @argc: input one
 * @argv: input two
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
