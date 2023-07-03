#include "main.h"
/**
 * puts2 - function entry
 * @str: string to work with
 * Return: void
 */
void puts2(char *str)
{
	int i, l = 0;

	while (str[l] != '\0')
		l++;

	for (i = 0; i <= l ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
