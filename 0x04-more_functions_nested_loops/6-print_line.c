#include "main.h"
/**
 * print_line - Draws a straight line using the _ character
 * @n: The number of times the _ character should be printed
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
