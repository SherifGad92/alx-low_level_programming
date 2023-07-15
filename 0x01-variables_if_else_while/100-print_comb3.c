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
	for (int x = 0; x <= 9; x++)
	{
		for (int y = 0; y <= 9; y++)
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
		}
	}
	putchar('\n');
	return (0);
}
