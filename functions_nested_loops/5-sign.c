#include "main.h"

/**
 * print_sign - program for alphabet printing
 *
 * Description: 'print alphabet in lowercase'
 *
 * @c: entry
 *
 * Return: 1 if lowercase, 0 in other cases
 */

int print_sign(int n)
{
	char plus = '+';
	char moins = '-';
	char zero = '0';

	if (n > 0)
	{
		_putchar(plus);
		return (1);
	}
	if (n < 0)
	{
		_putchar(moins);
		return(-1);
	}
	_putchar(zero);
	return (0);
}
