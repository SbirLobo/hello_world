#include "main.h"

/**
 * Print alphabet
 *
 * Description: 'print alphabet'
 *
 * Return: no return
 */

void print_alphabet(void)
{
	char n = 'a';
	char _a = '\n';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar(_a);
}
