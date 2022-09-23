#include "main.h"

/**
 * leet - char function
 * @l: input value
 * Description: encodes string into 1337
 * Return: value
 */
char *leet(char *l)
{
	int i, j;
	char n_arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char l_arr[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (j = 0; l[j] != '\0'; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (n_arr[i] == l[j])
			{
				l[j] = l_arr[i];
			}
		}
	}
	return (l);
}
