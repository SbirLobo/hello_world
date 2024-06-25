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

	if (n % 2 == 1)
	{
		
	}

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
