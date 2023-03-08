#include "main.h"
/**
 * _puts_recursion - printing a string
 * @s: string givin
 * Return: string
 */

void _puts_recursion(char *s)
{
	int i = -1;

	if (s[i] == '\0')
		return ();
	i++;
	return (s[i], _puts_recursion(s));
}
