#include "main.h"

/**
 * print_last_digit - p
 * @n: j
 * Return: yes
 */

int print_last_digit(int n)
{
	long x;

	if (n < 0)
		x = -n;
	x = x % 10;
	_putchar(x + 48);
	return (x);
}
