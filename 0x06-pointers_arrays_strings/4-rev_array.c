#include "main.h"

/**
 * reverse_array - function that reverses content of an array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{


		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
