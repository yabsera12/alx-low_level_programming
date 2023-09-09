#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - that print lower case with out printf
 *
 * Return: 0 on success
 */
int main(void)
{
	char lowercase[26] = "abcdefghijklmnopqrstuvwxyz";
	int initial;

	for (initial = 0; initial < 26; initial++)
	{
		putchar(lowercase[initial]);
	}
	putchar('\n');
	return (0);
}
