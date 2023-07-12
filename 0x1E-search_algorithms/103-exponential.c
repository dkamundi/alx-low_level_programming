#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using Exponential search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t prev;
	size_t min_size;
	size_t i;

	if (array == NULL)
		return -1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	prev = bound / 2;
	min_size = (size < bound) ? size : bound + 1;

	printf("Value found between indexes [%lu] and [%lu]\n", prev, bound - 1);

	if (size >= min_size)
	{
		printf("Searching in array: ");
		for (i = prev; i < min_size - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
	}
	else
	{
		printf("Searching in array: ");
		for (i = prev; i < size - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
	}

	for (i = prev; i < min_size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (int)i;
	}

	return -1;
}

