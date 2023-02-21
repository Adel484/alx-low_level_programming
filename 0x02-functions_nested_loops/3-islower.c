#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for a lowercase
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
	_putchar('\n');
}
