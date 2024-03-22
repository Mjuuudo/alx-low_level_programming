#include "lists.h"

/**
 * add node at end - adding a node at the end of the linked list
 * @head: the head of the linked list
 * @n: the data of tghe new node
 *
 * Description: doubly linked list node structure
 *
 */
 
// size_t print_dlistint(const dlistint_t *h)
// {
// 	size_t compteur;
// 	dlistint_t *tmp;

// 	compteur = 0;
// 	tmp = h;
// 	while (tmp)
// 	{
// 		compteur++;
// 		printf("%d\n", tmp->n);
// 		tmp = tmp->next;
// 	}
// 	return (compteur);
// }
 dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
 {
    dlistint_t *new;
    dlistint_t *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
    new->n = n;
    new->next = NULL;
    if (*head == NULL)
    {
        new->prev = NULL;
        *head = new;
        return (new);
    }
    last = head;
    while (last->next)
    {
        last = last->next;
    }
    last->next = new;
    new->prev= last;
    return (new);

 }