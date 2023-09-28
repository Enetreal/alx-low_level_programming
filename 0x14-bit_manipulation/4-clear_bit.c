#include "main.h"

/**
 * clear_bit - Sets the vvalue of a bit to ) at a given index
 * @n: Pointer to the number to modify
 * @index: Index of the bit to clear (starting from 0)
 *
 * Return: 1 if it succeeded, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	i = ~(1UL << index); /* Create a mask with a 0 at the specified index */
	*n = *n & i; /* Clear the bit at the index (set it to 0) */
	return (1);
}
