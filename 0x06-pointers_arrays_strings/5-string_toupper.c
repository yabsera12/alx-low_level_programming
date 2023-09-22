#include "main.h"

/**
 * string_toupper - lettr of lowercase to upper case.
 * @s: string input
 * Return: char pointer
 */
char *string_toupper(char *s)
{
	char *str = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (str);
}
