#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int m, n;

	if (str == NULL)
		return (NULL);
	for (m = 0; str[m] != '\0'; m++)
		;
	strout = (char *)malloc(sizeof(char) * (m + 1));
	if (strout ==NULL)
		return (NULL);
	for (n = 0; n <= m; n++)
		strout[n] = str[n];
	return (strout);
}
