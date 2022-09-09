#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
char x;
for (x = 'A'; x <= 'Z'; x++)
{
	x = tolower(x);
	putchar(x);
}
return 0;
}
