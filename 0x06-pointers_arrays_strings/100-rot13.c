#include "main.h"
/**
 * rot13 - encode str to rot13
 * @str: string to be encoded
 * Return: encoded str
 */

char *rot13(char *str)
{
	int i = 0;
	char k;

	while (str[i])
	{
		for (k >= 'a'; k <= 'z'; k++)
		{
			if (str[i] == k && k < 'm')
				str[i] = k + 13;
			else
				str[i] = k - 13;
		}
		i++;
	}
}
