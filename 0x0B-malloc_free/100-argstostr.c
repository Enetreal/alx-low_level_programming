#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concantenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str, *s;
	int a, b, c, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		s = av[a];
		b = 0;

		while (s[b++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len +1));
	if (str == NULL)
		return (NULL);
	for (a = 0, b = 0; a < ac && b < len; a++)
	{
		s = av[a];
		c = 0;
		while (s[c])
		{
			str[b] = s[c];
			c++;
			b++;
		}
		str[b++] = '\n';
	}
	str[b] = '\0';

	return (str);
}
