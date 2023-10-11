#include "3-calc.h"
#include <stdio.h>
#include <stdlib>
/**
 * op_add - sum two numbers
 * @a: first number
 * @b: second number
 * Return: sum of the two number
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two number
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: result of division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: reminder of the division of a by b
 */
int op_mob(int a, int b)
{
	return (a % b);
}
