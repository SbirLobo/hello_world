#include "main.h"

/**
 * more_numbers - print 0 to 14, 10 times.
 */

void more_numbers(void)
{
	int i, k;

	while (k < 10)
	{
	for (i = 0; i < 15; i++)
	{
		if (i > 9)
		{
			_putchar('0' + ((i - i % 10) / 10));
		}
		_putchar('0' + i % 10);
	}
	k++;
	_putchar('\n');
	}
}
