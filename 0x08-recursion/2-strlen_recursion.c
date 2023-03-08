#iclude "main.h"
/**
 * _strlen_recursion - lenght of string
 * @s: string
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
