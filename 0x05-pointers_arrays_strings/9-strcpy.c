#include "math.h"

/**
 * _strcpy - copy a string to another string
 * @src: source string
 * @dest: destination string
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
int i = 0, length;
for (length = 0; src[length] != '\0'; length++)
{
}
while (i < length)
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (*dest);
}
