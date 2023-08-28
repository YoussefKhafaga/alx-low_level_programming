#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: string to search for a char in
 * @c: the character to search for
 */
char *_strchr(char *s, char c)
{
while (s++)
{
if (s[0] == c)
{
return (s);
}
}
return (NULL);
}

