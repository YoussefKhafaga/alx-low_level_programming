#include "main.h"

/**
 * puts_half - function to print the second half of a string
 * @str: The string
 */

void puts_half(char *str)
{
int i, length = 0;
while (*str++)
{
length++;
}
for (i = length / 2; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
