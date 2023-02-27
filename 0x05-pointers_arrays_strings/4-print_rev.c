#include "main.h"
/**
 * print_rev - print in reverse
 * @s: str
 * Return: str in rev
 */

void print_rev(char *s)
{
	int l;

	l = sizeof(s);
	while (l >= 0)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
