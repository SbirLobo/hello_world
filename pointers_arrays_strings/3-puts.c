#include "main.h"

/**
 * _puts - print a string
 * @str: string
 */

void _puts(char *str)
{
	int i;

	int numberOfChar = 0;

	while (str[numberOfChar] != '\0')
	{
		numberOfChar++;
	}

	for (i = 0; i < numberOfChar; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
