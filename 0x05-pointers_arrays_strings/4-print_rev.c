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
for (int i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
_putchar ('\n');
}
