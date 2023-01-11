#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string pointer
 * Return: \0
 */
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	s = malloc((sizeof(char) * size) + 1);
	if (s == NULL)
		return (NULL);
	for (; i < size; i++)
		s[i] = str[i];
	return (s);
	free(s);
}
