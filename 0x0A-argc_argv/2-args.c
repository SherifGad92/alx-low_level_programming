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
	int x;

	for (x = 0, argc--, x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
