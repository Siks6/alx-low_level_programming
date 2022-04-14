#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_mul - multiplies two ints (a and b)
 * @a: input int 
 * @b: input int 
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_sub - subs two ints (a and b)
 * @a: input int 
 * @b: input int
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_add - sums two ints (a & b)
 * @a: input int
 * @b: inout int 
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_div- divides two ints (a & b)
 * @a: input int 
 * @b: input int
 * Return: division of a/b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns module of a and b
 * @a: input int
 * @b: input int 
 * Return: result of a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

