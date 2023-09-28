#include "main.h"

/**
 * _atoi - Converts a character to an integer
 * @c: The character to convert
 * Return: The converted integer
 */
unsigned int _atoi(char c)
{
	return ((unsigned int)c - '0');
}

/**
 * _strlen - Gets the lenght of a string
 * @str: The input string
 * return: The string lenght
 */
unsigned int _strlen(const char *str)
{
	unsigned int index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
}

/**
 * binary_to_unit - Converts a binary number to an unsigned int
 * @b: The string containing '0' and '1' characters
 * Return: The converted number, or 0 if @b contains non-binary characters or is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0, base2 = 1, num = 0;

	/* check if b is NULL */
	if (b == NULL)
		return (0);
#ifdef DEBUG
	printf("String is %s, and length is %u. \n", b, _strlen(b));
#endif

	for (index = _strlen(b) - 1; index >= 0; index--)
	{
		num = _atoi(b[index]);

#ifdef DEBUG
		printf("Number is %u, index is %i, and base is %u. \n\n", num, index, base2);
#endif

		/* Check if the character is not '0' or '1' */
	       if (num != 0 && num != 1)
	       return (0);

	       result += num * base2;
	       base2 *= 2;

#ifdef DEBUG
	       printf("Result is %u. \n", result);
#endif
	}

	return (result);
}
