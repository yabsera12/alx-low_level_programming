/*
 * File: 0-create_array.c
 * Auth: Gedeon Obae Gekonge
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of
 *	chars, and initializes it with a specific char.
 * @size: sizeof the array input.
 * @c: char to intialize with of array.
 *
 * Return: array inpute is 0 return 0 or no input returns null.
 *         Otherwise - array pointer.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
