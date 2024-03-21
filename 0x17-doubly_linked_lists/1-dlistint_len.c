#include "lists.h"

/**
 * List length - doubly linked list
 * @h: the linked list
 *
 * Description: doubly linked list node structure
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t compteur;

	compteur = 0;
	while (h)
	{
		compteur++;
		h = h->next;
	}
	return (compteur);
}
