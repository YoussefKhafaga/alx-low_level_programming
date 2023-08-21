#include "main.h"

/**
 * swap_int - function to swap two numbers
 * @a: pointer to an integer
 * @b: pointer to another integer
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
