#include "main.h"

/**
 * puts2 - prototype
 * @str: pointer
 */

void puts2(char *str)
{
	int i, a;

	for (i = 0; str[i] != '\0'; i++)
	{}

	for (a = 0; a < i; a += 2)
	{
		_putchar (str[a]);
	}
	_putchar (10);
}
