#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 97 ; j <= 122 ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
