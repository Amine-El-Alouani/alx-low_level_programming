#include <stdio.h>
/**
 * main - main block
 * prints the alphabet i lower except q & e.
 * Return: 0
 */

int main(void)
{

int x;

for (x = 'a'; x <= 'z'; x++)
{
	if (x != 'q' && x != 'e')
	{
		putchar(x);
	}
}
putchar('\n');
return (0);
}
