#include "main.h"
/**
 * puts2 - print every other char
 * @str: string
 * Return: string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < sizeof(str); i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
