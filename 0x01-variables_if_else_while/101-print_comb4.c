#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription - prints different combinations of three digits.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		int y = 0;

		while (y <= 9)
		{
			int z = 0;

			while (z <= 9)
			{
				if (x < y && y < z)
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(z + 48);
					if (x != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
