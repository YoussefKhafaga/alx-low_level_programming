#include "main.h"
/**
 * set_bit - sets a bit
 * @n: integer
 * @index: index of bit
 * Return: bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	mask = 1 << index;
	*n |= mask;
	return (1);
}

