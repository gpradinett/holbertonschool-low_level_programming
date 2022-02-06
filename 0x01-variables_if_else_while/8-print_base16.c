#include <stdio.h>
/**
 * main - random number negative and positive random number
 *
 * Return: Always 0 (two success)
 *
 * Description: negative and positive random number
 */
int main(void)
{
int n;
char ch;

for (n = 48; n < 58; n++)
{
putchar (n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar (ch);
}
putchar('\n');
return (0);
}
