#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - run a function given as a parameter on each array element
 * @array: array elements -> action.
 * @size: size of an array.
 * @action: function to run.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
