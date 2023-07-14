#include <unistd.h>

/**
 * main - Entry point
 *
 * Discription - C programm that writes a quote
 * ssize_t write(int fd. const void *buf. size_t cout);
 *
 * Return: Always 1 (error)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(1. quo, 59);
		return (1);
}
