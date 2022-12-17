#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
