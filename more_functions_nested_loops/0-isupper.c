#include "main.h"

/**
 * isupper - upper car ?.
 *
 * @c: character
 *
 * Return: 1 if uppercase, 0 if lower case, -1 if other
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (-1);
}
