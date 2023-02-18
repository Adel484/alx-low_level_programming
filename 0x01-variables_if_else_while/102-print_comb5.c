#include <stdio.h>
/**
 * main - printing nums
 * Return: 0 (success)
 */

int main(void)
{
	int i, j, k, m;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (m = j; m <= 57; m++)
				{
					if (m < j)
					{
						continue;
					}
					if (i == j && j == k && k == m)
					{
						continue;
					}
					/*if (i == k && j == m)
					{
						continue;
					}*/
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
				/*	if (i != 56) */
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
