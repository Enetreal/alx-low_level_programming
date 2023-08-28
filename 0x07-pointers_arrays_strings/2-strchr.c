#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @c: occurrence of the character
 * @s: the string
 *
 * Return: a pointer to the first occurence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	
	return (NULL);
}
