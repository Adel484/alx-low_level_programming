#include "main.h"

/**
 * _abs - abs
 * Return: abs
 */

int _abs(int n)
{
	if (n < 0)
		return (_putchar(n * -1));
	else
		return (_putchar(n));
}
