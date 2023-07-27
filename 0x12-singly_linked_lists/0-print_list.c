#include "main.h"

/**
 * _strlen - function entry to calculate the length of a string
 * @s: string
 * Return: length
 */
int _strlen(cahr *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);


}
/**
 * print_list - function entry to print the length of  a liste
 * @h: variable
 * Return: Size of Linked Liste
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
