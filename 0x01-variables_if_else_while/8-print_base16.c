#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = '0'; c <= 'f'; c++)
{
if (c >= 'a' && c <= 'f')
{
putchar(c);
}
else if (c <= '9')
{
putchar(c);
}
}
putchar('\n');
return (0);
}

