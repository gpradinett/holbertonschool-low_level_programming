#include "main.h"

/**
 * swap_int - swap the values to two integers
 * @a: integer for swap
 * @b: integer for swap
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
