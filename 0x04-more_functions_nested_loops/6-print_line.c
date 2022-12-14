#include "main.h"

/**
 * print_line - prints a line to a given lenght.
 * @n:  is the number of times the character _ should be printed
 *
 */
void print_line(int n)
{
	while (!(n <= 0))
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
