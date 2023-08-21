#include <stdio.h>
#include "main.h"

/**
*print_array - print n element of array of integers
*@a: array to be printed
*@n: number of elements to print
*Return: Always 0.
*/

void print_array(int *a, int n)
{
int inc;
for (inc = 0; inc < n ; inc++)
{
if (inc != n - 1)
printf("%d, ", a[inc]);
else
printf("%d", a[inc]);

}
printf("\n");
}
