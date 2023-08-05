#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: string size
 * @argv: string
 *
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char const *argv[])
{
	int sum;
	char *x;

	while (--argc)
	{
		for (x = argv[argc]; *x; x++)
			if (*x < '0' || *x > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
