#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s;

	s = str_concat("Hello", NULL);
	if (s == NULL)
	{
		printf("fail\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
