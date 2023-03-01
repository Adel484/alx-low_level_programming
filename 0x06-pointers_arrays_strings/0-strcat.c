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
	while (*dest++)
		i++;
	k = 0;
	while (*src++)
		k++;
	for (l = 0; l < (i + k) && l != '\0'; l++)
	{
		dest[i + l] = src[l];
	}
	dest[i + l] = '\0';
	return (dest);
}
