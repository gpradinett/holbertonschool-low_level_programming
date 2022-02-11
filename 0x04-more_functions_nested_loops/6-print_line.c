#include "main.h"

/**
 * print_line - print "_" in the line
 * @n: number characte to draw
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');
	_putchar('\n');
}
