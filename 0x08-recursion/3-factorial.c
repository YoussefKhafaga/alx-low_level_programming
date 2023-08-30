#include "main.h"
/**
 * factorial - calcualtes factorial of a number
 * @n: number to calculate factorial for
 * Return: return factorial result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
