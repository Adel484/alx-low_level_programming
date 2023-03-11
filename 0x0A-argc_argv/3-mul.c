#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1
 */

int main(int argc, char *argv)
{
	int i, sum = 1;

	if (argc < 3)
	{
		printf("Error");
	}
	else
	{
		for (i = 1; i < argc; i++)
			sum *= atoi(argv[i]);
		printf("%d\n", sum);
	}
	return (1);
}
