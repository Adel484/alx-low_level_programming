#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - printing 10 times the alphabet
 * Return: No return
 */

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
