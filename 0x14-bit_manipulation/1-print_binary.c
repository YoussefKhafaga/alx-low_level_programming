#include "main.h"
/**
 * print_binary - prints binary
 * @n: integer
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	if (n == 0)
	{
		putchar('0');
	}
	while (shift >= 0)
	{
		unsigned long int bit = (n >> shift) & 1;

		if (bit)
		{
			flag = 1;
		}
		if (flag)
		{
			putchar(bit ? '1' : '0');
		}
		shift--;
	}
}

