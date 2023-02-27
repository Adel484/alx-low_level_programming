#include "main.h"
/**
 * _puts - print a string
 * @str: par
 * Return: string
 */

void _puts(char *str)
{
	int l;

	l = 0;
	while (l < sizeof(str))
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
