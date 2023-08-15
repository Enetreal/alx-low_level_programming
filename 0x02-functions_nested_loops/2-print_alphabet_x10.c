#include "main.h"

/**
 * print_alphabeth_x10 - Make alphabeth x10 times
 * Return: void
 */

void print_alphabeth_x10(void)

{

        char c;
        int i = 0;

        while (i <= 9)
        {
        for (c = 'a'; c <= 'z'; c++)
        {
        _putchar(c);
        }
        _putchar('\n');
        i++;
        }
}
