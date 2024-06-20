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
	char virg = ',';
	char space = ' ';
	char aa = '\n';
	int i;
	int j;
	int k;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 9; k++)
{
	if (i < j && j < k)
	{
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');
		if (i < 7)
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
