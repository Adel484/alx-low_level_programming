#include "main.h"
/**
 * print_square - the name is a description
 * @size: this is also a descripe itself
 * Return: #
 */

void print_square(int size)
{
	int i;
	int k;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}
		for (k = 0; k < size; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
