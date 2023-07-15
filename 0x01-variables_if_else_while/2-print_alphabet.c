#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription - prints the alphabet in lower case
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
