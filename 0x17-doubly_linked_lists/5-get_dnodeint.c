#include "lists.h"
/**
 * get_dnodeint_at_index - function get node
 *
 * @head: head pointer
 * @index: int
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
