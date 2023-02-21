#include <stdio.h>
#include "main.h"
/**
 * main - prototype
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
