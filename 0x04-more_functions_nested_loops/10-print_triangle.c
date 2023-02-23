#include <main.h>
/**
 * print_triangle - trinagle with #
 * @size: size of trinagle
 * Return: trinagle
 */

void print_triangle(int size)
{
	int i;
	int k;

	for (i = 1; i <= size; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}
		for (k = size; k <= 1; k++)
			_putchar(32);
		for (k = 1; k <= i; k ++)
			_putchar(35);
	}
}
