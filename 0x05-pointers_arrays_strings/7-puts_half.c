#include "main.h"
/**
 * puts_half - half of str
 * @str: string
 * Return: half of str
 */

void puts_half(char *str)
{
	int l;
	
	l = sizeof(str) / 2;
	while ( l >= 0)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
