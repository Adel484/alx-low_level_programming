#include <main.h>
/**
 * print_diagonal - diagonal
 * @n: times / printed
 * Return: diagonal
 */

void print_diagonal(int n)
{
	int i;
	int k;

	for (i = 1; i <= n ; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		for (k = 0; k < i; k++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
