#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the digit.
 * @c : return parameter.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int result = 0;

	if (c <= 57 && c >= 48)
	{
		result = 1;
	}
	return (result);
}
