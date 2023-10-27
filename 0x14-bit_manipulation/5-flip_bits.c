#include "main.h"

/**
 * flip_bits - A function that returns the number of bits
 *		you would need to flip to get from one number to another.
 * @n: The number.
 * @m: The number to flip n in to.
 *
 * Return: the number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bit = 0;

	while (x > 0)
	{
		bit += (x & 1);
		x >>= 1;
	}

	return (bit);
}
