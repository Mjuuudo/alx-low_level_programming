#include <stdio.h>
/**
 * _strlen - returns the length
 * @s: the given string
 * Return: Nothing
 */
int _strlen(char *s)
{
	size_t rs = 0;

	while (*s++)
		rs++;
	return (rs);
}
