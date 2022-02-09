#include "main.h"
/**
 * main - random number negative and positive random number.
 * main - funtion "_putchar"
 * Return: Always 0 (two success)
 *
 * @c: char character
 */

int _putchar(char c);

void print_alphabet(void);
{
	char c;
  c ='a';
  
  while(c <= 'z')
  {
  _putchar(c);
    c++;
  }
	_putchar('\n');
	return (0);
}
