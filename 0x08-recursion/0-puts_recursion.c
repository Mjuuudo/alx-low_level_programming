#include "main.h"
/**
 * _puts_recursion - fn entry
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
		len++;

	for (i = 0; i < len ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
