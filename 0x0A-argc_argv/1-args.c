#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing number of args passing
 * @argc - argument count
 * @argv - argument vector
 * Return: 0
 */

int main(int argc, char *argv)
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
		sum += atoi(argc[i]);
	printf("%d\n", sum);
	return (0);
}
