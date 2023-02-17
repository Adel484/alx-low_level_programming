#include <stdio.h>
/**
 * main - printing combination
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	
	i = 48;
	while (i <= 57)
	{
		putchar(i);
		putchar(' ');
		putchar(',');
		i++;
	}
	putchar('\n');
	return (0);
		
}
