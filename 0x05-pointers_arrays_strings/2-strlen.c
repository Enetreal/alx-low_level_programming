#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: char to chec
 * decription: this will return the lenght of a string
 * Return: 0 is success
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
