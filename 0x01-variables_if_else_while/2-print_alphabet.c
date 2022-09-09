#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * 
 * Return: 0
 */

int main(void)
{	
int x;

for(x = 'A'; x <='Z'; x++) 
{
	int lowerX = tolower(x);
	putchar(lowerX);
}
return 0;
}
