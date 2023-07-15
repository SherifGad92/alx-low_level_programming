#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription - prints numbers in base 16
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int x = 48;

	while (x <= 102)
	{
		putchar(x);
		if (x == 57)
			x += 39;
		x++;
	}
	putchar('\n');
	return (0);
}
