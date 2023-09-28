#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to modify
 * @index: Index of the bit to set (starting from 0)
 *
 * Return: 1 if it succeeded, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	i = 1 << index; /* Create a mask a 1 at the specified index */
	*n = *n | i; /* Set the bit at the index to */

	return (1);
}
