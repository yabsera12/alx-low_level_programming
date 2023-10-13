#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns
 *	the sum of all its paramters.
 * @n: Paramters num passed to the function.
 * @...: A variable number of paramters to be added.
 *
 * Return: If n == 0 - 0, Otherwise
 *	sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index, sum = 0;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
