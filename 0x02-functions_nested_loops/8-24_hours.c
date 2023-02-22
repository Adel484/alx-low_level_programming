#include "main.h"

/**
 * jack_bauer - my day
 * Return: nothing
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 52; j++)
		{
			for (k = 48; k < 56; k++)
			{
				for (l = 0; l < 58; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
				}
			}
		}
	}
}
