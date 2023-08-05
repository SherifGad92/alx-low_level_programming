#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 *
 * @argc: string size
 * @argv: string
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
