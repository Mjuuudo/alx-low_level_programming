#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: first integer
 * @b: second integre
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
