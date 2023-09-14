#include "main.h"
#include <stdio.h>

/**
 * _abs - check the code is not nagative.
 * @r:an intiger input.
 *
 * Return: Always 0.
 */
int _abs(int r)
{
	int result = 0;

	if (r < 0)
	{
		result = r * (-1);
	}
	else if (r == 0)
	{
		result = 0;
	}
	else if (r >  0)
	{
		result = r;
	}
	return (result);
}
