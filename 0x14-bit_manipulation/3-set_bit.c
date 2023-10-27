#include "main.h"

/**
 * set_bit - A function that sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index start at 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
