#include "main.h"
/**
 * _strlen_recursion - get the length of a string recursively
 * @s: stringto get its length
 * Return: length of s string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

