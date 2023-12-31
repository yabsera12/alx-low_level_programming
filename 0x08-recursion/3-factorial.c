#include "main.h"

/**
 * factorial -function that return factorial of a given number.
 * @n: int type number
 * Return: factorial of a given number
 */

int factorial(int n)
{
	int fact = 0;

	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	fact = n * factorial(n - 1);

	return (fact);
}
