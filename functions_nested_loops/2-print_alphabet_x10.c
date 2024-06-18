#include "main.h"

/**
 * print_alphabet_x10 - program for alphabet printing
 *
 * Description: 'print alphabet in lowercase'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char n = 'a';
	char _a = '\n';
	int i;

	for (i = 0; i < 10; i++)
	{
		n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar(_a);
	}
}
