#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: str1
 * @src: str2
 * @n: bytes from src
 * Return: str1 + str2
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l, k;

	i = 0;
	while (dest[i])
		i++;
	k = 0;
	while (src[k])
		k++;
	for (l = 0; i < n && src[l] != '\0'; l++)
		dest[i + l] = src[l];
	dest[i + l] = '\0';

	return (dest);
}
