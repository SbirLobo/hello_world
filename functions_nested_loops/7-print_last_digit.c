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
	int result;

	if (a < 0)
	{
		a = -a;
	}
	result = a % 10;
	_putchar('0' + result);
	return (result);
}
