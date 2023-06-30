#include "main.h"
/**
 * _strncat -Concatination
 * @dest: the string uppon
 * @src: the string te be append
 * @n: the number of bytes from src
 * Return: A pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
