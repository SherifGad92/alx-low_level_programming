#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription - program to find the last digit of a number
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10

	if (ld > 5)
		printf("Last digit of %d is %d%s\n", n, ld, " and is greater than 5");
	else if (ld == 0)
		printf("Last digit of %d is %d%s\n", n, ld, " and is 0");
	else
		printf("Last digit of %d is %d%s\n", n, ld, " and is less than 6 and not 0");
	return (0);
}
