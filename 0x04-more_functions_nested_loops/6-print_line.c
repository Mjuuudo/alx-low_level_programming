#include "main.h"
/**
 * print_line - Printing lines
 * @n:numbbers of lines
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n ; i++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
