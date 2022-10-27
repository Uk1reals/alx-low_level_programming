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
alx-low_level_programming/0x04-more_functions_nested_loops/101-print_number.c
@prevho
prevho Challenges for breakfast
 1 contributor
Executable File  22 lines (17 sloc)  275 Bytes
#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: integer to be printed.
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
