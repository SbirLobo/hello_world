#include "main.h"
#include <stdio.h>

/**
 * print_number - print integers
 * @n: integer
 */

void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n % (i * 10) < n)
		i = i * 10;

	while (n > 0)
	{
		if (n % i == n)
		{
			_putchar('0');
		}
		else
		{
			_putchar((n - n % i) / i + '0');
			n -= (n - n % i);
		}
		i = i / 10;
	}
}
