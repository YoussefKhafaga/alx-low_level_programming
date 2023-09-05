#include "main.h"
/**
 * create_array - functions that creates array
 * @size: size of the array
 * @c: char assigned to the array of chars
 * Return: pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

