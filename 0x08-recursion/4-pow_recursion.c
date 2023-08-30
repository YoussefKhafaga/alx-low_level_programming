#include "main.h"
/**
 * _pow_recursion - calculates power of a number recursively
 * @x: number to calculate its power
 * @y: exponent
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}

