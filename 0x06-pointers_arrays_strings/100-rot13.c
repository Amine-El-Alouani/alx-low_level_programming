#include "main.h"

/**
 * rot13 - char func
 * @r: input value
 * Description: rot13 function
 * Return: value
 */
char *rot13(char *r)
{
	int i,j;
	char n_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_chars[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; r[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (r[i] == n_chars[j])
			{
				r[i] = rot_chars[j];
				break;
			}	
		}
	}
	return (r);
}

