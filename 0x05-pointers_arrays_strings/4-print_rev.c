#include "main.h"

/**
 * print_rev - print a string reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
int length = 0, i;
while (s[length] != '\0')
{
length++;
}
for (i = length - 2; i >= 0; i--)
{
putchar(s[i]);
}
_putchar ('\n');
}
