#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription - prints single digits in base 10
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + 48);
		x++;
	}
	putchar('\n');
	return (0);
}
