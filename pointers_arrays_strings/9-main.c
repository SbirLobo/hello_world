#include "main.h"
#include <stdio.h>


/**
 * _strlen - return length of string
 * @s: string
 * Return: int for response
 */
int _strlen2(char *s)
{
	int numberOfChar = 0;

	while (s[numberOfChar] != '\0')
	{
		numberOfChar++;
	}
	return (numberOfChar);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;
    int n;

    ptr = _strcpy(s1, "");
    printf("%s", s1);
    printf("%s", ptr);
    n = _strlen2(ptr);
    printf("%d\n", n);
    return (0);
}
