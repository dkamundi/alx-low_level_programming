#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: parameter
 * @c: character c
 * Return: \0
 */
char *create_array(unsigned int size, char c)
{
	char *t = malloc(size);

	if (size == 0 || t == 0)
	{
		return (NULL);
	}
	while (size--)
		t[size] = c;
	return (t);
	free(t);
}
