#include "main.h"
/**
 * _isalpha - cheacking is alpha 
 * @c - Cheacking parametre
 * Return:void
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
