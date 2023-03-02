#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: str1
 * @src: str2
 * Return: str1 + str2
 */

char *_strcat(char *dest, char *src)
{
	int i, l, k;

	i = 0;
	l = 0;
	while (dest[i++])
		l++;

	for (i = 0; src[i]; i++)
	{
		dest[i + l] = src[i];
	}
	dest[i + l] = '\0';
	return (dest);
}
