#include "main.h"
/**
 * _strcmp : compares two strings
 * @s1: first string
 * @s2: the string to be compared with s1
 * Return: integer based on the comparison if equal 0 if s1 > s2 1 otherwise -1
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;
while (s1[a] != '\0')
{
if (s1[a] < s2[a])
{
return (s1[a] - s2[a]);
}
if (s1[a] > s2[a])
{
return (s1[a] - s2[a]);
a++;
}
else
{
return (0);
}
}
return (0);
}
