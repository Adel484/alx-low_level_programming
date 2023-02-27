#include "main.h"
/**
 * _strcpy - copy
 * @dest: par 1
 * @src: par 2
 * Return: str
 */

char *_strcpy(char *dest, char *src)
{
	int *p;

	p = *dest;
	*dest = *src;
	return (p);
}
