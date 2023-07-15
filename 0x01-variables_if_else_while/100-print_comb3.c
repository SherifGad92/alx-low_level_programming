#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription - prints different combinations of two digits.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int x = 0;
	int y = 0;

	while (x <= 9)
	{
		while (y <= 9)
		{
			if (x < y)
			{
				putchar(x + 48);
				putchar(y + 48);
				if (x != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++
	}
	putchar('\n');
	return (0);
}
