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

for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(',');
}
}
putchar('\n');
return (0);
}
