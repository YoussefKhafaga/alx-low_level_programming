#include "main.h"
/**
 * _strncpy - copies a limited characters string
 * @src: source string that will be copied
 * @dest: destination string
 * @n: number of characters will be taken from source string
 * Return: dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;
while (src[j] != '\0')
{
if (j == n)
{
break;
}
dest[j] = src[j];
j++;
}
while (j != n)
{
dest[j++] = '\0';
}
return (dest);
}
