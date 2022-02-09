#include "main.h"
/**
 * main - random number negative and positive random number
 *
 * Return: Always 0 (two success)
 *
 * Description: negative and positive random number
 */
int _putchar(char c);

void print_alphabet_x10(void)
{
  char c;
  int i = 0;
      
    while (i < 10)
    {
        c = 'a';
        while (c <= 'z')
       {
       _putchar(c);
         c++;
        }
	_putchar('\n');
	i++;	
    }
	
}
