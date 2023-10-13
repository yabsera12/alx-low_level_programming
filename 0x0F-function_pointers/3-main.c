#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that Prints the
 *	result of simple operations.
 * @argc: Number input.
 * @argv: Pointers Array arguments.
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *opp;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	opp = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(opp) == NULL || opp[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opp == '/' && num2 == 0) ||
	    (*opp == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opp)(num1, num2));

	return (0);
}
