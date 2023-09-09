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
	int firstdig, lastdig, thrddig;

	for (firstdig = 0; firstdig < 8; firstdig++)
	{
		for (lastdig = firstdig + 1; lastdig < 9; lastdig++)
		{
			for (thrddig = lastdig + 1; thrddig < 10; thrddig++)
			{
				putchar((firstdig % 10) + '0');
				putchar((lastdig % 10) + '0');
				putchar((thrddig % 10) + '0');

				if (firstdig == 7 && lastdig == 8 && thrddig == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
