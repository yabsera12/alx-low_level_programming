#include <stdio.h>

/**
 * main - print the sum of product of 3 or 5.
 *
 * Return: - void
 */
int main(void)
{
	unsigned long one = 1, two = 1, sum = 1, wholesum = 0;

	while (sum <= 4000000)
	{
		sum = one + two;
		if (sum % 2 == 0)
		{
			wholesum += sum;
		}
		one = two;
		two = sum;
	}
	printf("%lu", wholesum);
	printf("\n");
	return (0);
}
