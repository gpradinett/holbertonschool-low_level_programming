#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers fro 1 to 100, followed by a new line.
 * but for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * fot numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: 0 succesful
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n == 100)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
