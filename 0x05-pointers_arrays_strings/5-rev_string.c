#include "main.h"
/**
 * rev_string - reverse str
 * @s: str
 * Return: str in reverse
 */

void rev_string(char *s)
{
	int l;

	l = sizeof(s) - 1;
	while (l >= 0)
		_putchar(s[l]);
}
