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
  char ch;
  int i;
  
  i = 0;
  
	while (i < 10)
{
    ch = 'a';
    while (ch <= 'z')
    {
    _putchar(ch);
      ch++;
    }
	_putchar('\n');
	i++;	
}
	
}
