#include "main.h"
/**
 * _print_rev_recursion - prints a string reverse in recursion
 * @s: string to be printed reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s);
	_putchar(*s);
}
