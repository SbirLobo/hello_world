#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @s: string
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
