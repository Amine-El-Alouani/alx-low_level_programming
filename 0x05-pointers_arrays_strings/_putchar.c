#include <unistd.h>

/**
 * _putchar - writes the characters c to stdout
 * @c: The characters to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set apporopiately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
