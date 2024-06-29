#include "main.h"
#include <stdio.h>

/**
 * print_number - print integers
 * @n: integer
 */

void print_number(int n)
{
	unsigned int nn, i = 1000000000;

	if (n < 0)
	{
		nn = -n;
		_putchar('-');
	}
	else
		nn = n;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (i > 0)
	{
		if (nn > i || i == 1)
			_putchar('0' + nn / i % 10);

		i /= 10;
	}
}
