#include "lists.h"
/**
 * add_dnodeint_end - function add node end
 *
 * @head: double pointer
 * @n: const int
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

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

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	new->prev = tmp;

	return (new);
}
