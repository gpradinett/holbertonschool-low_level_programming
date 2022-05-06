#include "lists.h"
/**
 * free_dlistint - function free double linked list
 *
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
