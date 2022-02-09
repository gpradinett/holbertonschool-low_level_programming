#incluide "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
  int h, m;
  
  for (h = 0; h < 24; h++)
  {
  for(minute = 0; minute <60; minute++)
  {
  
    _putchar((h / 10) + '0');
    _putchar((h % 10) + '0');
    _putchar(':');
    _putchar((m / 10) + '0');
    _putchar((m % 10) + '0');
    _putchar('\n');
  
  }
  
  }
  
}
