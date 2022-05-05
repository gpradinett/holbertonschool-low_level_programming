#include "lists.h"

/**
 * print_dlistint - function print double linked list
 *
 * @h: pointer head
 * Return: counter of linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
© 2022 GitHub, Inc.
Ter
