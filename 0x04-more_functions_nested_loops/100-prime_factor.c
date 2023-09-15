#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long n = 2;
	unsigned long in = 612852475143;

	if (in > 1)
	{
		while (n < in)
		{
			if (in % n != 0)
				n++;
			else
			{
				in = in / n;
			}
		}
		printf("%ld", in);
	}
	else
		printf("%d", 0);
	printf("\n");
	return (0);
}
