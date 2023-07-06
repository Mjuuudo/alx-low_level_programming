#include "main.h"
/**
 * _sqrt_recursion - fn entry
 * @n: number
 * @val: value
 * Return: square
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - fn entry
 * @n: number
 * @val: value
 * Return: value
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
