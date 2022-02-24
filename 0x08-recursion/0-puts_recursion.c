#include "main.h"

/**
 * _puts_recursion - prints a string with recursion followed by a new line
 * @s: address of the string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return ;
	}
	_putchar(*s);
	_puts_recursion (s + 1);
}
