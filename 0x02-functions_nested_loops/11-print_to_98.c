#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - natural nums
 * @n: par
 * Return: nums
 */

void print_to_98(int n)
{
	for (n = 0; n < 99; n++)
	{
		printf(n);
		if (n == 98)
			continue;
		printf(',');
		printf (' ');
	}
	printf('\n');
}
