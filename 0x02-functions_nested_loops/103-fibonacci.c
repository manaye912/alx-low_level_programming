#include <stdio.h>
/**
  * main - Prints the sum of even-valued Fibonacci sequence
  * Return: Always 0
  */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	float tot_sum;

	while (1)
	{
		fsum = f1 + f2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			tot_sum += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%lu\n", tot_sum);

	return (0);
}
