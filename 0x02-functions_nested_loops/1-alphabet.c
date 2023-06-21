#include "main.h"
/**
 * main - entry point
 * Description: 'function that prints alphabets in lower case'
 * Return: always 0(success)
 */
int print_alphabet(void)
{
	int i;

	for ( i = 97 ; i <= 122 ; i++)
	{
		_putchar(i);
	}
}
