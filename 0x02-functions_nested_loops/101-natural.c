
Sign up
prevho
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x02-functions_nested_loops/101-natural.c
@prevho
prevho Fibonacci numbers are crazy
 1 contributor
Executable File  22 lines (19 sloc)  311 Bytes
#include <stdio.h>
/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5.
 *
 * Return: Always (0).
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
