#include "main.h"

/**
 * _memcpy - function to copy n bytes from mem loction to another mem loc
 * @dest: destination string
 * @src: soruce string
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

