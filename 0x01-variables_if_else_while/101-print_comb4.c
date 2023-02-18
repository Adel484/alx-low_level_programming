#include <stdio.h>
/**
 * main - printing nums
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1;k <= 57; k++)
			{
				if (i == j == k)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
