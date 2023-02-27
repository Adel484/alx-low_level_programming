#include "main.h"
/**
 * _strcpy - copy
 * @dest: par 1
 * @src: par 2
 * Return: str
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
