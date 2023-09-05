#include "main.h"
/**
 * create_array - functions that creates array
 * @size: size of the array
 * @c: char assigned to the array of chars
 * Return: pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	char *arr = malloc(sizeof(char) * size);

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

