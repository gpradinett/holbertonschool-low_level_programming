#include "main.h"

/**
 * print_rev - pirnt in reveerse string
 *
 * @s: String for printed
 */
void print_rev(char *s)
{
	int first, len = 0;

	while (*(s + len) != '\0')
		len++;

	for (first =  len - 1; first >= 0; first--)
	_putchar(s[first]);
	_putchar('\n');
}
