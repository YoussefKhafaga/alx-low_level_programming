#include "main.h"

/**
 * _strpbrk - function to search a string for any set of bytes
 * @s: string to be searched
 * @accept: string to be compared with s string
 * Return: returns s pointer or null if not found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (*s++ == *accept++)
		{
			return (s);
		}
	}
	return (NULL);
}

