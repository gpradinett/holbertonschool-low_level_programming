#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int i,
	char counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
		if (i /10 > 0)

		_putchar(i / 10) + '0');
		_putchar(i % 10) + '0');

	}
		_putchar('\n');
	}
}
