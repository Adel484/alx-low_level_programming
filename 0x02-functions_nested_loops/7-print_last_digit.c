#include "main.h"

/**
 * print_last_digit - p
 * @n: j
 * Return: yes
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	n = n % 10;
	_putchar(n + 48);
	return (n);
}
