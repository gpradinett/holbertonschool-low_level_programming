#include "main.h"

/**
 * print_diagonal - print caracter \ n times
 * @n: number caracter to draw
 */

void print_diagonal(int n)
{
	int draw;
	int space;

	if (n > 0)
	{
		for (draw = 0; draw < n; draw++)
		{
			for (space = 0; space < draw; space++)
			_putchar(' ');
	_putchar('\\');
	_putchar('\n');
}
