#include "main.h"
/**
 * string_toupper - change lower to upper
 * @str: string
 * Return: upper
 */

char *string_toupper(char *str)
{
	int i = 0;
	
	while (str[i])
	{
		if (i >= 'a' && i <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
