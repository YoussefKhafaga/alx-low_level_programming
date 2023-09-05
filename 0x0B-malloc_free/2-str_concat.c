#include "main.h"
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to new string or null
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str = malloc(sizeof(char) * ((int)strlen(s1) + (int)strlen(s2)) + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	while (i < (int)strlen(s1) + 1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < ((int)strlen(str)) + 1)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}

