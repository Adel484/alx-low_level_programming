#include "main.h"
/**
 * _atoi - convert str into int
 * @s: str
 * Return: int
 */

int _atoi(char *s)
{
	int i, l, m;

	l = 0;
	while (s[l])
		l++;
	for (i = 0; i < l; i++)
	{
		if (s[i] == '-')
			_putchar(45);
		else if (s[i] >= 0 && s[i] <= 9)
			_putchar(s[i]);
		else
			continue;
	}
}
