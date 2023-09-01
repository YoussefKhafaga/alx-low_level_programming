#include "main.h"

/**
 * _memset - function to fills memory with constant byte
 * @s: memory pointer
 * @b: byte to fill the memory with
 * @n: number bytes of b
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
