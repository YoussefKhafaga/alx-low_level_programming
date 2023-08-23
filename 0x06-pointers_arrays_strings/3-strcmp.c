#include "main.h"
/**
 * _strcmp : compares two strings
 * @s1: first string
 * @s2: the string to be compared with s1
 * Return: integer based on the comparison if equal 0 if s1 > s2 1 otherwise -1
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0;
while (s1[i] != '\0' && s2[j] != '\0')
{
if (s1[i] > s2[j])
{
return (1);
}
if (s2[j] > s1[i])
{
return (-1);
}
i++;
j++;
}
if (s1[i] != '\0')
{
return (1);
}
if (s2[j] != '\0')
{
return (-1);
}
return (0);
}
