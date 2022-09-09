#include <stdio.h>
/**
 * main -main block
 * combinations
 * Return: 0
 */
int main(void)
{
int n;
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
		{
			continue;
		} else
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}
