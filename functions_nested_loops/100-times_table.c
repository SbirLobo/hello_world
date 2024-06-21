#include "main.h"

/**
 * print_times_table - program for alphabet printing
 * Description: 'print times table'
 * @n: number of times table
 */

void print_times_table(int n)
{
	int i, j, result, cent, diz, unit;
	char space = ' ';
	char virg = ',';
	char aa = '\n';

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			cent = (result - result % 100) / 100;
			diz = (result - result % 10 - cent * 100) / 10;
			unit = result % 10;
			if (j == 0)
			{
				_putchar('0' + unit);
			}
			else
			{
				(cent > 0) ? _putchar('0' + cent) : _putchar(space);
				(diz > 0) ? _putchar('0' + diz) : _putchar(space);
				_putchar('0' + unit);
			}
			if (j < n)
			{
				_putchar(virg);
				_putchar(space);
			}
		}
		_putchar(aa);
	}
}
