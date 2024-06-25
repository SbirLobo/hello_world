#include "main.h"
#include <stdio.h>

/**
 * new - create reverse
 * @n: length of string
 * @s: char
 */

void new(int n, char *s)
{
	int i;
	char tab[1000];

	for (i = 0; i < n; i++)
	{
		tab[i] = s[n - 1 - i];
	}
	for (i = 0; i < n; i++)
	{
		*(s + i) = *(tab + i);
	}
}

/**
 * rev_string - reverse string with pointer effect
 * @s: char
 */

void rev_string(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	new(n, s);
}
