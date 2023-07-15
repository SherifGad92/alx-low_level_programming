#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription - prints different combinations of 2 sets of two digits.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int x = 0;

	while (x <= 99)
	{
		int y = x;

		while (y <= 99)
		{
			if (y != x)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 98 && y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
