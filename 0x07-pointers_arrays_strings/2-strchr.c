#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: string to search for a char in
 * @c: the character to search for
 * Return: pointer to memory location or null
 */
char *_strchr(char *s, char c)
{
while (s++)
{
if (*s == c)
{
return (s);
}
}
if (*s == c)
{
return (s);
}
return (0);
}

