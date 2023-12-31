#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints name
 * @name: the name to be printed
 * @f: pointer to code
 */

void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}

