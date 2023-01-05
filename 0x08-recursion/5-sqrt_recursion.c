#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - finds the root
 * @n: integer
 * @result: result of root
 * Return: 0
 */
int square(int n, int result)
{
	if (result * result == n)
		return (result);
	else if (result * result < n)
		return (square(n, result + 1));
	else
		return (-1);
}
