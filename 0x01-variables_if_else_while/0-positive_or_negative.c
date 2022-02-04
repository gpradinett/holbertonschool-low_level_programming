#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random number negative and positive random number.
 *
 * Return: Always 0 (two success)
 *
 * Description: negative and positive random number.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is pocleasitive", n);
	else if (n == 0)
	printf("%d is zero ", n);
	else if (n < 0)
	printf("%d is negative", n);
	return (0);
}
