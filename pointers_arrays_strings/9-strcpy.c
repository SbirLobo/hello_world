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

	do {
		numberOfChar++;
	} while (s[numberOfChar] != '\0');
	return (numberOfChar);
}

/**
 * *_strcpy - copy a string pointed
 * @dest: array
 * @src: number of elements to print
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int n = _strlen(src);

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}

	return (dest);
}
