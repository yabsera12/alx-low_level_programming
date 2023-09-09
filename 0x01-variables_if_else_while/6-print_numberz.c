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
	int initial;

	for (initial = 0; initial < 10; initial++)
	{
		putchar((initial % 10) + '0');
	}
	putchar('\n');
	return (0);
}
