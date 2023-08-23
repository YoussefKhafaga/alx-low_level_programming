#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array of integers
 * @n: number of elements to be swapped
 */
void reverse_array(int *a, int n)
{
int i = 0, j = n - 1, temp;
while (i != j)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
j--;
}
}
