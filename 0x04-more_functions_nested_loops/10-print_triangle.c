#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: number of # size
 *
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; j < size; i++)
	{
		for (j = 0; j < size; j++)
		{
		if (j < (size - i - 1))
		_putchar(' ');
		else
			_putchar('#');
		}
		_putchar('\n');
	}
}
