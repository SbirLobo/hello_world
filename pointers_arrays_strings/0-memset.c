#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory on pointer
 * @s: pointer
 * @b: byte
 * @n: size
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
