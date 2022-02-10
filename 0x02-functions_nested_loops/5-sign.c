#include "main.h"
/**
 * print_sign - print number
 * Return: print 1 if 0, 0 if 0, -1 if less a 0
 * @n: imput number
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
