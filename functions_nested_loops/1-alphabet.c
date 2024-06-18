#include "main.h"

/**
 * print_alphabet - program for alphabet printing
 * 
 * Description: 'print alphabet in lowercase'
 * 
 * Return: Always 0 (Success)
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
