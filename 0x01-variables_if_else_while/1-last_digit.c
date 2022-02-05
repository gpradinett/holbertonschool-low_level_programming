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
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
	printf("and is greater than 5\n");
	else if (n % 10 == 0)
	printf("and is 0\n");
	else if (n % 10 < 6)
	printf("and is less than 6 and not 0\n");
	return (0);
}
