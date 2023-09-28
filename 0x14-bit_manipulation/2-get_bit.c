#include "main.h"
/**
 * get_bit - see function
 * @n: int
 * @index: index of the bit
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1 << index;
	return ((n & mask) ? 1 : 0);
}

