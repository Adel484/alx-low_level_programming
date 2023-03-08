#iclude "main.h"
/**
 * is_prime_number - cheching if number is prime or not
 * @n: number given to check
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n % i == 0)
			return (0);
		else
			return (1);
	}
}
