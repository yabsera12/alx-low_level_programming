#include "main.h"

/**
 * _isalpha - print if c is the letter.
 * @c:is an intiger
 * Return: Always 0.
 */
int _isalpha(int c)
{
	char r = c;
	int result = 0;

	if ((r >= 97 && r <= 122) || (r >= 65 && r <= 90))
	{
		result = 1;
	}
	return (result);
}
