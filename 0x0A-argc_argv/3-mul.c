#include <stdio.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: string size
 * @argv: string
 *
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char const *argv[])
{
	int prod;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		prod = *argv[1] * *argv[2];
		printf("%d\n", prod);
		return (0);
	}
}
