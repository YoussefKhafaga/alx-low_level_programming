#include "main.h"
/**
 * _strstr - function to locate substring
 * @haystack: string
 * @needle: string
 * Return: pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack++ == *needle++)
		{
			return (haystack);
		}
	}
	return (NULL);
}

