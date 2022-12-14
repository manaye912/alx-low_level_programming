#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int prior, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0 ; i < n ; i++)
	{
		prior = i;
		while (prior > 0)
		{
			_putchar(32);
			prior--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
