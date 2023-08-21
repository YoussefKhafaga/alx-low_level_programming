#include "main.h"

/**
 * puts_half - function to print the second half of a string
 * @str: The string
 */

void puts_half(char *str)
{
int i, length;
for (length = 0; str[length] != '\0'; length++)
{
}
for (i = (length - 1) / 2; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
