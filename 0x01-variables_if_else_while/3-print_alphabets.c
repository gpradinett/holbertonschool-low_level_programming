#include <stdio.h>
/* main - main*/
/* Return: Always 0 (two success)*/
/* Description: program that prints the alphabet in lowercase, and then in uppercase, followed by a new line*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
