#include "main.h"
/**
 * _strchr - fnc start
 * @s: source var
 * @c: char
 * Return: Rest
 */
char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0' ; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
