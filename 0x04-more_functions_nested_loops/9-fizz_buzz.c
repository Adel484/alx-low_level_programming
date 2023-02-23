#include "main.h"
/**
 * main - fizzbuzz
 * Return: 0
 */

int main(void)
{
	int i, m;
	char k[] = "Fizz";
	char l[] = "Buzz";

	for (i = 1; i <= 100)
	{
		if (i % 3 == 0)
		{
			for (m = 48; m < 52)
				_putchar(k[m]);
		}
		else if (i % 5 == 0)
		{
			for (m = 48; m < 52)
				_putchar(l[m];
		}
		else
			_putchar('i');
	}
}
