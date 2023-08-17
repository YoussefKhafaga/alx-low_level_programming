#include "main.h"
/**
 * FizzBuzz - Prints numbers from 1 to 100 and fizz for multiple of 3 numbers
 * and buzz for multiple of 5 numbers
 * and fizzbuzz for multiple of 3 and 5 numbers
 */
void FizzBuzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
continue;
}
if (i % 3 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
}
if (i % 5 == 0)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
_putchar(i + '0');
}
}
