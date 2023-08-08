#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: integer
 * @av: pointer to array
 * Return: a pointer to a new string (Success),  NULL (fail)
 */

char *argstostr(int ac, char **av)
{
	int size, count, ct1, ct2 = 0;
	char *ary;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < ac; count++)
	{
		for (ct1 = 0; av[count][ct1] != '\0'; ct1++)
		{
			size += 1;
		}
		size += 1;
	}
	size += 1;

	ary = malloc(sizeof(char) * size);
	if (ary == NULL)
	{
		free(ary);
		return (NULL);
	}
	for (count = 0; count < ac; count++)
	{
		for (ct1 = 0; av[count][ct1] != '\0'; ct1++)
		{
			ary[ct2] = av[count][ct1];
			ct2++;
		}
		ary[ct2] = '\n';
		ct2++;
	}
	ary[ct2] = '\0';
	return (ary);
}
