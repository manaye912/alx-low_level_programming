#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer.
 * @array: array elements -> cmp.
 * @size: size of an array.
 * @cmp: pointer to the functio to be used to compare values
 * Return: i(index of array)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size >= 0 && array != NULL && cmp != NULL)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
			{
				return (a);
			}
		}
	}
	return (-1);
}
