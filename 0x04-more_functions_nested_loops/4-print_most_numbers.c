#include "main.h"

/**
 * void print_most_numbers - print 0 to the 9 except 2 and 4
 */

void more_numbers(void)
{
	char i;

	for (i = '0' i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
}
