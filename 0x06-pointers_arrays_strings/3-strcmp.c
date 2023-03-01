#include "main.h"
/** _strcmp - compare two strings
 * @s1: str1
 * @s2: str2
 * Return: 0 or positve int or negative int
 */

int _strcmp(char *s1, char *s2)
{
	int i, k = 0;

	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (i == k)
		return (0);
	else if (i < k)
		return (*s1 - *s2);
	else 
		return (1);
}
