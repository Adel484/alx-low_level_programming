#iclude "main.h"
/**
 * _puts_recursion - printing a string
 * @s: string givin
 * Return: string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}
