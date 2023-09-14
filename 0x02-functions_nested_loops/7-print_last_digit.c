#include "main.h"

/**
 * print_last_digit - check the code
 * @r:parameter;
 * Return: last digit r.
 */
int print_last_digit(int r)
{
	int result;

	if (r < 0)
		result = (r % 10) * -1;
	else
		result = r % 10;

	_putchar((result % 10) + '0');
	return (result % 10);
}
