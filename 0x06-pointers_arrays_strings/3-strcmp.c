#include "main.h"

/**
 * _strcmp - a function compares two strings.
 * @s1: string input
 * @s2: string input
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
