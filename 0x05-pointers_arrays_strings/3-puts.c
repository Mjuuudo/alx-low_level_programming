#include "main.h"
/**
 * _puts - print string
 * @str: print a string
 * Return: String with new line
 */
void _puts(char *str)
{
	for (; *str != 0 ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
