#include "main.h"

/**
 * times_table - program for alphabet printing
 *
 * Description: 'print alphabet in lowercase'
 *
 * Return: 1 if lowercase, 0 in other cases
 */

void times_table(void)
{
	char dd = ',';
	char _a = '\n';
	char space = ' ';
	int i;
	int j;
	int unit;
	int diz;
	int calc;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			calc = i*j;
			diz = ('0' + (calc - calc % 10) / 10);
			unit = ('0' + calc % 10);
			if (diz > '0')
			{
				_putchar(diz);
			}
			else
			{
				_putchar(space);
			}
			_putchar(unit);
			if (j != 9)
			{
				_putchar(dd);
				_putchar(space);
			}
		}
		_putchar(_a);
	}
}
