#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concat dest + src
 * @dest: dest string
 * @src: adding string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int _length = 0;
	int i;

	while (dest[_length] != '\0')
		_length++;
	for (i = 0; src[i] != '\0'; i++)
		*(dest + _length + i) = src[i];
	return (dest);
}
