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
	int l;
	int num1;
	int num2;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 9; k++)
{
for (l = 0; l <=9; l++)
{
	num1 = i * 10 + j;
	num2 = k * 10 + l;
	if (num1 < num2)
	{
		putchar(i + '0');
		putchar(j + '0');
		putchar(space);
		putchar(k + '0');
		putchar(l + '0');
		if (num1 < 98 || num2 < 99)
		{
		putchar(virg);
		putchar(space);
		}
	}
}
}
}
}
putchar(aa);

return (0);
}
