#include "main.h"
#include <stdio.h>

/**
 * print_number - print integers
 * @n: integer
 */

void print_number(int n)
{
	unsigned int nn, i = 1;

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
	while (nn % (i * 10) < nn)
		i = i * 10;

	while (nn > 0)
	{
		if (nn % i == nn)
		{
			_putchar('0');
		}
		else
		{
			_putchar((nn - nn % i) / i + '0');
			nn -= (nn - nn % i);
		}
		i = i / 10;
	}
}
