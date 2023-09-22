#include "main.h"
/**
 * leet - a encodes a string into 1337.
 * @s: encode an input string
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char str1[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
			if (s[i] == str[j])
				s[i] = str1[j];

		i++;
	}

	return (s);
}
