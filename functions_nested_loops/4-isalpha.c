#include "main.h"

/**
 * _isalpha - program for alphabet printing
 *
 * Description: 'print alphabet in lowercase'
 *
 * @c: entry
 *
 * Return: 1 if lowercase, 0 in other cases
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
}
else
{
	return (0);
}
}
