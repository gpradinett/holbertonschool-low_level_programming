#include "main.h"
/**
 * print_to_98 - print natural numbers of input to 98,
 * in order separated by a comma followed by a space,
 * @n: enter numero for counting
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		printf("%d, ", n--);
	printf("%d\n", n);
	}

	else
	{
		while (n < 98)
		printf("%d, ", n++);
	printf("%d\n", n);
	}
}
