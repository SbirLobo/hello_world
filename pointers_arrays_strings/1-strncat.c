#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concat dest + src
 * @dest: dest string
 * @src: adding string
 * @n: integer
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int src_length = 0;
	int i;

	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[src_length] != '\0')
		src_length++;
	n = (n > src_length) ? src_length : n;
	for (i = 0; i < n; i++)
		*(dest + dest_length + i) = src[i];
	return (dest);
}
