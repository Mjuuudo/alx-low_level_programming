#include "main.h"
/**
 * _isalpha - entry point
 *
 * @c: entred char
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 89) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
