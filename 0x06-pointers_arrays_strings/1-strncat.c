#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int sn = 0, i = 0;
	char *tempdest = dest, *init = src;

	while (*src)
	{
		sn++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > sn)
		n = sn;

	src = init;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (tempdest);
}
