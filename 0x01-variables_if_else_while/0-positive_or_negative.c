#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - checking whether the number is positve or negative or zero
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positve", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
        {
		printf("%d is negative", n);
	}
	
	return (0);
}
