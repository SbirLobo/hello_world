#include "main.h"

/**
 * print_last_digit - program for alphabet printing
 *
 * Description: 'print alphabet in lowercase'
 *
 * @a: entry
 *
 * Return: 1 if lowercase, 0 in other cases
 */

int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	{
		a = -1 * a;
	}
	_putchar('0' + a);
	return (result);
}
