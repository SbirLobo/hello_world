#include "main.h"

/**
 * print_line - straight line printing.
 * @n: integer
 */

void print_line(int n)
{
	for (n = n; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
