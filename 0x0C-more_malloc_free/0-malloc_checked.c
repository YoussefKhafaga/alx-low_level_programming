#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of memory
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

