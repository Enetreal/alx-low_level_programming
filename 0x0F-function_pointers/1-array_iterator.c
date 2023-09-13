#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: targeted array
 * @size: array size
 * @action: function to be executed
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
