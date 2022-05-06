#include "lists.h"

/**
 * delete_dnodeint_at_index - function delete node
 *
 * @head: double pointer
 * @index: unsigned int
 * Return: 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;

		free(tmp);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (tmp->next == NULL)
			return (-1);

		tmp = tmp->next;
	}

	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	free(tmp);

	return (1);
}
