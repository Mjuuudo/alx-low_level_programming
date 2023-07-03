#include "main.h"
/**
 * *_strcpy - function entry
 * @*dest: destination var
 * @*src: source variable
 * Return: value to pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest [i] = src [i];
	} while (src[i] != '\0');
	return (dest);
}
