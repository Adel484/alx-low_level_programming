#include <stdio.h>
#include "main.h"
/**
 * main - printing 10 times the alphabet
 * Return: 0
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	char i;
	int n = 0;

	while (n < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
		n++;
	}
}
