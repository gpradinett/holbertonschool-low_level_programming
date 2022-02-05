#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of the number stored in the variable n
 *
 *
 * Return: Always 0 (two success)
 *
 * Description: This program will assign a random number to
 * the variable n each time it is executed, print the last
 * digit of the number stored in the variable n.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
	printf("and is greater than 5\n", n);
	else if (n % 10 == 0)
	printf("and is 0\n", n);
	else if (n % 10 < 6)
	printf("and is less than 6 and not 0\n", n);
	return (0);
}
