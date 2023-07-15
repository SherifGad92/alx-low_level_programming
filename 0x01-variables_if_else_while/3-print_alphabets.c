#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription - prints the alphabet in lower & upper case
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
