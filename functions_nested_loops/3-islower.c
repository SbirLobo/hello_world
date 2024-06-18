#include "main.h"

/**
 * _islower - program for alphabet printing
 *
 * Description: 'print alphabet in lowercase'
 *
 * @c: entry
 *
 * Return: 1 if lowercase, 0 in other cases
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
}
else
{
	return (0);
}
}
