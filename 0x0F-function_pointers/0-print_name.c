#include "function_pointers.h"

/**
 * print_name -  function that prints a name.
 *
 * @name: char name of the person
 * @f: function pointer
 *
 * Return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
