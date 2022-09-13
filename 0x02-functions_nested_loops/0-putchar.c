#include "main.h"
/**
 * main - main block
 * _putchar
 * Return: 0
 */

int main(void)
{
	char putchar[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
