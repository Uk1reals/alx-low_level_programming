
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
alx-low_level_programming/0x02-functions_nested_loops/3-islower.c
@prevho
prevho Lowercase issue
 1 contributor
Executable File  23 lines (21 sloc)  298 Bytes
#include "main.h"

/**
 * _islower - Retuns 1 if char is lowercase character
 * else, return 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase. 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
