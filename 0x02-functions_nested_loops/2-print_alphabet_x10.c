#include "main.h"

/**
 * alphabet x ten
 */

void print_alphabet_x10(void)
{
int i = 0;
int j;
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');	
		i++;
	}
}
