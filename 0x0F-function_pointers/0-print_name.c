#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints name
 * @name: the name to be printed
 * @f: pointer to code
 */

void print_name(char *name , void(*f)(char *))
{
	(*f)(name);
}

