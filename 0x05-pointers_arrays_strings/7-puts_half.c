#include "main.h"
/**
 * puts_half - function entry
 * @str: The string to print half of it
 * Return: void
 */
void puts_half(char *str)
{
	int i, l = 0;

	while (str[l] != '\0')
		l++;

	for (i =  l / 2  ; i <= l ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
