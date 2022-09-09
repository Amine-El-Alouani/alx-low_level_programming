#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
char x;
char xLower;

for (x = 'A'; x <= 'Z'; x++)
{
	xLower = tolower(x);
	putchar(xLower);
}
putchar('\n');
return (0);
}
