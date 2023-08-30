#include "main.h"
/**
 * is_prime_number - check if a number is prime
 * @n: integer number
 * Return: 1 if prime 0 if not prime
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == (0))
		{
			return (0);
		}
	}
	return (1);
}
