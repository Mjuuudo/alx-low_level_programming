#include "main.h"
/**
 * print_last_digit - entry point
 *
 * @i: number entred
 *
 * Return: Always the result
 */
int print_last_digit(int i)
{
	int l;
	int conv;

	l = i % 10;
	if (l < 0)
	{
		conv = l * (-1);
		_putchar(conv);
		return (conv);
	}
	else
	{
		_putchar(l);
		return (l);
	}
}
