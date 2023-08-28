#include "main.h"
/**
 * _strspn - function to get the length of prefix substring
 * @s: string
 * @accept: prefix string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s++ == *accept++)
	{
		length++;
	}
	return (length);
}

