#include "main.h"

/**
 * print_last_digit - p
 * @n: j
 * Return: yes
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
		_putchar(n + 48);
		return (n);
	}
	if (n < 0)
	{
		n = n % 10;
		_putchar(48 - n);
		return (_putchar(48 - n);
	}
}
