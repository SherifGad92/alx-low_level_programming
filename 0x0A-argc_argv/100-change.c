#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min numb of coins for change
 *
 * @argc: string size
 * @argv: string
 *
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int x, units = 0, mon = atoi(argv[1]);
		int ch[] = {25, 10, 5, 2, 1};

		for (x == 0, x < 5; x++)
		{
			if (mon >= ch[x])
			{
				units += mon / ch[x];
				mon = mon % ch[x];
				if (mon % ch[x] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", units);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
