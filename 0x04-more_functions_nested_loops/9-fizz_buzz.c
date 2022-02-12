i#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers fro 1 to 100, followed by a new line.
 * but for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * fot numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n < 100)
		{
			if ((n % 3 == 0) && !(n % 5 == 0))
			{
				printf("Fizz ");
			}
			else if ((n % 5 == 0) && !(n % 3 == 0))
			{
				printf("Buzz ");
			}
			else if ((n % 3 == 0) && (n % 5 == 0))
			{
				printf("Fizz Buzz");
			}
			else
			{
				printf("%d", n);
			}
			if (n == 100)
			{
				printf("Buzz \n");
			}
		}
	}
	return (0);
}
