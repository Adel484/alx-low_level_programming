#include "main.h"
/**
 * leet - 1337
 * @str: par
 * Return: leet
 */

char *leet(char *str)
{
	int i = 0;
	int k = 0;
	char str1[] = "aAeEoOtTiI";
	char rep[] = "4433001177";

	while (str[i])
	{
		while (str1[k])
		{
			if (str[i] == str1[k])
				str[i] = rep[k];
			k++;
		}
		i++;
	}
	return (str);
}
