#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two nums
 * @a: first num
 * @b: second num
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs two nums
 * @a: first num
 * @b: second num
 * Return: sub of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two nums
 * @a: first num
 * @b: seconde num
 * Return: multiplication of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two nums
 * @a: first num
 * @b: second num
 * Return: division of two numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}

/**
 * op_mod - modulus of two numbers
 * @a: first number
 * @b: second number
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}

