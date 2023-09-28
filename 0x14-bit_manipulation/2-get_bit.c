#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number to check bits
 * @index: Index of the bit to check
 *
 * Return: The value of the bit at the specified index, or -1 if index is
 *         out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;
	
	if (index > (sizeof(unsigned long int) * 8 - 1))
        return (-1);
	
	div = 1 << index; /* Create a mask with a 1 at the specified index */
	res = n & div;    /* Check if the bit at the index is set */
	
	if (res == div)
        return (1);    /* Bit at the index is 1 */
	
	return (0);        /* Bit at the index is 0 */
}
