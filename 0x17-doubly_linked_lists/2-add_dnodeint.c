#include "lists.h"

/**
 * add node - adding a node at the begining of the linked list
 * @head: the head of the linked list
 * @n: the data of tghe new node
 *
 * Description: doubly linked list node structure
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
