#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set a volue of a bit at a given index to 0
 * @n: pointer to a bit
 * @index: set the value at indices start at 0
 *
 * Return: -1 if error otherwise 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
