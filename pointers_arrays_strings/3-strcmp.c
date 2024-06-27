#include "main.h"
#include <stdio.h>

/**
 * *_strcmp - compare 2 strings
 * @s1: string
 * @s2: string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, length1 = 0, length2 = 0;

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	while (s1[i] - s2[i] == 0)
		i++;
	return (i >= length1 && i >= length2) ? (0) : (s1[i] - s2[i]);
}
