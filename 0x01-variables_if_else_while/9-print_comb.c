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
	int init = '0';

	while (init <= '9')
	{
		putchar(init);
		if (init != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++init;
	}
	putchar('\n');
	return (0);
}
