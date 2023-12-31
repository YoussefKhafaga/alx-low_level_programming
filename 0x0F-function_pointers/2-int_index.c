#include "function_pointers.h"

/**
 * int_index - see below
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 * Return: 0 if element found -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

