
Sign up
Georgeoloche
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
@Georgeoloche
Georgeoloche Update 101-print_number.c
 1 contributor
22 lines (19 sloc)  268 Bytes
#include <stdio.h>
#include "main.h"

/**
* print_number - Prints a number
* @n: The number to print
*/

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
