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
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
