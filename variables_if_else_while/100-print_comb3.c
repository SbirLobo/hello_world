#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'description for betty requirement'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	char virg = ',';
	char space = ' ';
	char aa = '\n';

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ( i < j )
			{
				putchar(i + '0');
				putchar(j + '0');
			
			if (i < 9 || j <9)
				if (i*10 + j < 89)
				{
			{
				putchar(virg);
				putchar(space);
			}
				}
			}
		}
	
	}
	putchar(aa);
	return (0);
}
