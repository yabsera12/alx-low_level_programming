#include <stdio.h>

/**
 * main - print the mod of 3 or 5.
 *
 * Return: - void
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	i = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
