#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 excluding 2 and 4.
 *
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
			_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
