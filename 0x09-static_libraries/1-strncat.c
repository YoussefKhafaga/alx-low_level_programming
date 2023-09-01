#include "main.h"
/**
 * _strncat - concatenates two strings and takes only n characters from src
 * @src: source string
 * @dest: destination string
 * @n: number of characters taken from source string
 * Return: dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i++] = src[j++];
}
dest[i] = '\0';
return (dest);
}
