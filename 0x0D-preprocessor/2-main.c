#include <stdio.h>

/**
 * main -  prints name of file it was compiled from, then a new line.
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
