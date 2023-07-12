#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev;
	size_t jump;

	if (array == NULL)
		return -1;

	step = (size_t)sqrt(size);
	prev = 0;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return -1;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	for (jump = prev; jump < size && jump <= step; jump++)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		if (array[jump] == value)
			return (int) jump;
	}

	return -1;
}

