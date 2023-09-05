#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a new string
 * @str: string
 * Return: null or pointer to a string
 */
char *_strdup(char *str)
{
	char *dupstr = malloc(sizeof(char) * strlen(str));
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	if (dupstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (int)strlen(str); i++)
	{
		dupstr[i] = str[i];
	}
	return (dupstr);
}

