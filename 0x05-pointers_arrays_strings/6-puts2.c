#include "main.h"

/**
 * puts2 - function to print even characters in a string
 * @str: string to print its even characters
 */

void puts2(char *str)
{
int i, length;
for (length = 0; str[length] != '\0'; length++)
{
}
for (i = 0; i < length; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
