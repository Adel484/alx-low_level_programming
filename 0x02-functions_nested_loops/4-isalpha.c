#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check alpha
 *
 * @c: parameter
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
	_putchar('\n')
}
