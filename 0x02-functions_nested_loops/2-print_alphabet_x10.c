#include <stdio.h>
/**
 * main - printing 10 times the alphabet
 * return 0
 */

void print_alphabet_x10(void);

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
