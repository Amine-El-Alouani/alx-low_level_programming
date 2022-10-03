#include "main.h"
/**
 * _islower - check is lower
 * @c: checking lowercase
 * Return:void
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
