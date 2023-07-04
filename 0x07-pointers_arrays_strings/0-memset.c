#include "main.h"
/**
 * _memset - function entry
 * @s: source var
 * @b: duplicated var
 * @n: bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0 ; n > 0 ; itr++, n--)
	{
		s[itr] = b;
	}
	return (s);
}
