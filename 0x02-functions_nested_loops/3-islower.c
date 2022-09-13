#include "main.h"
/**
 * islower - check is lower
 * Return:void
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
	{
		return (0);
	}
}
