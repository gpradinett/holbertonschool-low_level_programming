#include "search_algos.h"

/**
 * binary_search - function that searches for a value in
 * @array: pointer to the first element of the array to search
 * @value: is the value to search for
 * @size: is the number of elements in array
 * a sorted array of integers using the Binary search algorithm
 * Return: Index of the searched value in the array
 */

int binary_search(int *array, size_t size, int value)
{
	int L = 0;
	int R = size - 1;
	int i = 0;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		int MID = (L + R) / 2;

		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			if (i != R)
				printf("%d, ",  array[i]);
			else
				printf("%d\n", array[i]);
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
