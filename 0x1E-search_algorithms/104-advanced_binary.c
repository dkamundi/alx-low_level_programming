#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index of the subarray
 * @high: Ending index of the subarray
 * @value: Value to search for
 *
 * Return: Index of the value if found, -1 otherwise
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return -1;

	printf("Searching in array: ");
	for (mid = low; mid < high; mid++)
		printf("%d, ", array[mid]);
	printf("%d\n", array[mid]);

	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (int)mid;
		return advanced_binary_recursive(array, low, mid, value);
	}
	else if (array[mid] > value)
		return advanced_binary_recursive(array, low, mid, value);
	else
		return advanced_binary_recursive(array, mid + 1, high, value);
}

/**
 * advanced_binary - Searches for a value in a sorted array using advanced binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	return advanced_binary_recursive(array, 0, size - 1, value);
}

