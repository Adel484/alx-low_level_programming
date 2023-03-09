#include "main.h"
/**
 * _sqrt_recursion - square of number
 * _find - find sqrt
 * @n: number given to get it's square
 * Return: natural square of number
 */

int find(num, root)
{
	if (root * root == num)
		return (root);
	else if (root == num / 2)
		return (-1);
	return (find(num, root + 1);
}


int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (find(n, root));
}
