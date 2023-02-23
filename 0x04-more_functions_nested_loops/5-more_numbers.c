#include "main.h"
/**
 * more_numbers - printing 10 times
 * Return: nums
 */

void more_numbers(void)
{
	int i;
	int k;

	i = 48;
	while (i < 58)
	{
		for (k = 0; k < 15; k++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
