#include "search_algos.h"

/**
 * @array: pointer to the first element of the array to search
 * @value: is the value to search for
 * @size: is the number of elements in array
 * @binary_search - function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 */

int binary_search(int *array, size_t size, int value)
{
	int L = 0;
	int R = size - 1;
	int i = 0;

	while (L <= R)
	{
		int MID = (L + R) / 2;

		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			if (i != R)
				printf("%d, ",  array[i]);
			else
				printf("%d, \n", array[i]);
		}
		if (value == array[MID])
			return (MID);
		else if (value < array[MID])
			R = MID - 1;
		else
			L = MID + 1;
	}
	return (-1);

}
