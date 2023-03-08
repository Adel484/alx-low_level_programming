#include "main.h"
/**
 * _sqrt_recursion - square of number
 * @n: number given to get it's square
 * Return: natural square of number
 */

int _sqrt_recursion(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i * i == n)
			return (i);
		else 
			return (-1);
	}
}
