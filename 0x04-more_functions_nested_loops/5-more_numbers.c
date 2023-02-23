#include "main.h"
/**
 * more_numbers - printing 10 times
 * Return: nums
 */

void more_numbers(void)
{
	int i;
	int k;

	i = 0;
	while (i < 9)
	{
		for (k = 0; k < 15; k++)
		{
			if (k > 9)
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
		i++
	}
}
