#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - random pass
 * Return - 0
 */

int main(void)
{
	int random = rand();

	srand(time(0));
	return (random);
}
