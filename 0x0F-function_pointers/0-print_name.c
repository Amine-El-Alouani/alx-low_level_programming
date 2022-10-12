#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - void func
 * @name: parameter
 * @f: parameter
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
