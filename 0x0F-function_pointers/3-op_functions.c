#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: first num.
 * @b: second num.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of two numbers.
 * @a: First number.
 * @b: Scond number.
 *
 * Return: Remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
