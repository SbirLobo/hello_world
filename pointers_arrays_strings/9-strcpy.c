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
		printf("%c\n", s[numberOfChar]);
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
	int i = 0;

	while  (src[i])
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i + 1) = '\0';
	return (dest);
}
