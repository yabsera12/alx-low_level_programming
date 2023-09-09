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
	int firstdig, lastdig;

	for (firstdig = 0; firstdig < 9; firstdig++)
	{
		for (lastdig = firstdig + 1; lastdig < 10; lastdig++)
		{
			putchar((firstdig % 10) + '0');
			putchar((lastdig % 10) + '0');

			if (firstdig == 8 && lastdig == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
