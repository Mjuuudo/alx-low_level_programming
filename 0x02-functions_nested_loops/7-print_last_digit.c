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
	int last_digit;

	last_digit = i % 10;
	if (last_digit < 0)
	{
		_putchar(-l + 48);
		return (-last_digit);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
