#include "main.h"
/**
 * _strlen_recursion - fn entry
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
	{
		len += _strlen_recursion(s + 1) + 1;
	}
	return (len);
}
