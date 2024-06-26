#include "main.h"
#include <stdio.h>

/**
 * _strlen - return length of string
 * @s: string
 * Return: int for response
 */
int _strlen(char *s)
{
	int numberOfChar = 0;

	while (s[numberOfChar] != '\0')
	{
		numberOfChar++;
	}
	return (numberOfChar);
}

/**
 * puts_half - puts half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i;
	int n = _strlen(str);
	int semiN;

	semiN = (n % 2 == 1) ? ((n + 1) / 2) : (n / 2);

	for (i = semiN; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
