#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - natural nums
 * @n: par
 * Return: nums
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		if (n == 98)
			continue;
		putchar(',');
		putchar(' ');
		n++;
	}
	while (n > 98)
	{
		if (n == 98)
			continue;
		putchar(',');
		putchar(' ');
		n--;
	}
	printf("\n");
}
