#include "main.h"

/**
 * print_rev - print a reverse string
 * @s: string
 */

void print_rev(char *s)
{
	int i;

	int numberOfChar = 0;

	while (s[numberOfChar] != '\0')
	{
		numberOfChar++;
	}

	for (i = numberOfChar - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
