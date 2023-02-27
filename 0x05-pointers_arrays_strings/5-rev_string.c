#include "main.h"
/**
 * rev_string - reverse str
 * @s: str
 * Return: str in reverse
 */

void rev_string(char *s)
{
	int l;

	l = 0;
	while (s[l])
	{
		l++;
	}
	while (l--)
		_putchar(s[l]);
}
