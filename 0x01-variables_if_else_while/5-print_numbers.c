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
	int i;

	while (i < 10)
	{
		printf("%d", i);
		i += 1;
	}
	printf("\n");
	return (0);
}
