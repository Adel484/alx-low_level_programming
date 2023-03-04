#include "main.h"
/**
 * cap_string - capitalize strings
 * @str: par
 * Return: capitalize string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 91 && str[i] <= 122)
		{
			if (str[i] >= 32 && str[i] <= 90 || str[i] == '{' || str[i] == '}')
				continue;
			else if (str[i - 1] >= 32 && str[i - 1] <= 63)
				str[i] -= 32;
			else if (str[i - 1] == '\n')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
