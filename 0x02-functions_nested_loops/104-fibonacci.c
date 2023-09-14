#include <stdio.h>

/**
 * main - print the sum of product of 3 or 5.
 *
 * Return: - void
 */
int main(void)
{
	int printcounter;
	int one = 1, two = 1, sum = 1;

	printcounter = 1;
	while (printcounter <= 98)
	{
		printf("%d", sum);
		sum = one + two;
		one = two;
		two = sum;
		if (printcounter == 98)
			printf("\n");
		else
			printf(", ");
		printcounter++;
	}
	return (0);
}
