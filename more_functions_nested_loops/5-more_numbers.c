#include "main.h"

/**
 * print_most_numbers - print 0 to 9 whithout 2 and 4.
 */

void more_numbers(void)
{
	int i, k;
	char aa = '\n';

	while (k < 10)
	{
	for (i = 0; i < 15; i++)
	{
		if (i > 9)
		{
			_putchar('0' + (i / 10));
		}
		_putchar('0' + i % 10);
	}
	_putchar(aa);
	k++;
	}
}
