#include "main.h"

/**
 * print_numbers - print 0 to 9.
 *
 * Return: 0 always
 */

void print_numbers(void)
{
	int i;
	char aa = '\n';

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar(aa);
}
