#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: number of counts
 * @argv: pointer to memory locations
 * Return: result of operation
 */

int main(int argc, char* argv[])
{
        int a, b, (*oprt)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	oprt = get_op_func(argv[2]);
	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", (int)oprt(a, b));
	return (0);
}

