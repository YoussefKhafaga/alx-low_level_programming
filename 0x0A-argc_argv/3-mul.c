#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0 for success 1 for error
 */
int main(int argc, char **argv)
{
	int num1, num2, mul;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}

