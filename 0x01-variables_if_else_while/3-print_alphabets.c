#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * alphabets is lower and upper case.
 * Return: 0
 */

int main(void){

char u;
char l;

for(l = 'a'; l <= 'z'; l++)
{
	putchar(l);
}

for(u = 'A'; u <= 'Z'; u++)
{
	putchar(u);
}
putchar('\n');
return (0);
}
