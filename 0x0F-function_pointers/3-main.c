#include "3-calc.h"

/**
 * main - int func
 * @argv: param
 * @argc: param
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int arg1, arg2;
	int (*func)(int, int);
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	o = argv[2];

	func = get_op_func(o);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	printf("%d\n", func(arg1, arg2));
	return (0);
}
