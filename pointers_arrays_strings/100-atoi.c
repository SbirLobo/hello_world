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
 * _atoi - copy a string pointed
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int i, n = _strlen(s);
	int relative = 0;
	int newInt = 0;

	for (i = 0; i < n; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			newInt = newInt * 10 + *(s + i) - 48;
		}
		else if (newInt > 0)
		{
			break;
		}
		if (s[i] == '+')
			relative++;
		if (s[i] == '-')
			relative--;
	}
	if (relative < 0)
		newInt = -newInt;
	return (newInt);
}
