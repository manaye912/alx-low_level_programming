#include "variadic_functions.h"

/**
 * print_numbers - Variadic function that prints whatever argument
 * is being passed in
 * @separator: What should separate functions
 * @n: Number of arguments being passed in
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
