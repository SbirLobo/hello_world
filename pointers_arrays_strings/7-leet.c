#include "main.h"
#include <stdio.h>

/**
 * *leet - leet to 1337
 * @c: string
 * Return: string
 */

char *leet(char *c)
{
	int c_length = 0;
	int i;

	while (c[c_length] != '\0')
		c_length++;
	for (i = 0; i < c_length; i++)
	{
		c[i] = (c[i] == 'a' || c[i] == 'A') ? '4' : c[i];
		c[i] = (c[i] == 'e' || c[i] == 'E') ? '3' : c[i];
		c[i] = (c[i] == 'o' || c[i] == 'O') ? '0' : c[i];
		c[i] = (c[i] == 't' || c[i] == 'T') ? '7' : c[i];
		c[i] = (c[i] == 'l' || c[i] == 'L') ? '1' : c[i];
	}
	return (c);
}
