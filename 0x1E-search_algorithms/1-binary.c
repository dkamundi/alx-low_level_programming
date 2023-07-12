#include "search_algos.h"

/**
 * binary_search - searches for @value in @array using binary search
 *
 * @array: pointer to first element of the array
 * @size: number of elements in an array
 * @value: value to search for
 *
 * Return: index where value is located
 *         -1 if array is empty or value dosn't exist
 */

int binary_search(int *array, size_t size, int value) {
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL) {
		return -1;
	}

	while (left <= right) {
		size_t mid = left + (right - left) / 2;

		printf("Searching in array: ");
		print_array(array, left, right);

		if (array[mid] == value) {
			return mid;
		} else if (array[mid] < value) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

	return -1;
}


/**
 * print_array - prints the array
 *
 * @array: array to print
 * @left: left half of the array
 * @right: right half of the array
 */

void print_array(int *array, size_t start, size_t end) {

	size_t i;

	for (i = start; i <= end; i++) {
		printf("%d", array[i]);
		if (i != end) {
			printf(", ");
		}
	}
	printf("\n");
}

