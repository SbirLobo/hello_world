#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
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
