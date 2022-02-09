#include <main.h>
/**
 * print_alphabet - print all alphabet
 *
 * char; charaicter
 * Return: return a char
 */

void print_alphabet_x10(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
	_putchar(ch);
	ch++;
	}
	_putchar('\n');
}
