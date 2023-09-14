#include <stdio.h>

/**
 * main - print the sum of product of 3 or 5.
 *
 * Return: - void
 */
int main(void)
{
	int printcounter;
	unsigned long one = 1, two = 1, sum = 1;

	printcounter = 1;
	while (printcounter <= 50)
	{
		printf("%lu", sum);
		sum = one + two;

		one = two;
		two = sum;

		if (printcounter == 50)
			printf("\n");
		else
			printf(", ");
		printcounter++;
	}
	return (0);
}
