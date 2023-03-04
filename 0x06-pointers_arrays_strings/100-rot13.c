#include "main.h"
/**
 * rot13 - encode str to rot13
 * @str: string to be encoded
 * Return: encoded str
 */

char *rot13(char *str)
{
	int i = 0, k;

	while (str[i])
	{
		for (k >= 'a'; k <= 'z'; k++)
		{
			if (str[i] == alpha[k] && k < 'm')
				str[i] = alpha[k] + 'm';
			else
				str[i] = alpha[k] - 'm';
		}
		i++;
	}
}
