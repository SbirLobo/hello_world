#include "main.h"

/**
 * jack_bauer - program for alphabet printing
 *
 * Description: 'print alphabet in lowercase'
 *
 * Return: 1 if lowercase, 0 in other cases
 */

void jack_bauer(void)
{
	char dd = ':';
	char _a = '\n';
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
		_putchar('0' + (i - i % 10) / 10);
		_putchar('0' + i % 10);
		_putchar(dd);
		_putchar('0' + (j - j % 10) / 10);
		_putchar('0' + j % 10);
		_putchar(_a);
		}
	}
}
