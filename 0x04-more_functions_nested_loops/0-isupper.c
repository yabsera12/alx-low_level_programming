#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the uppercase.
 * @c : intiger parameter.
 * Return: 1 fot uppercase and 0 fot lowercase.
 */

int _isupper(int c)
{
	int result = 0;

	if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	return (result);
}
