#include "main.h"
/**
 * _islower - returns 1 if c lower and 0 if Upper
 * @c: The Char Entred
 * Return: 1 or 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
