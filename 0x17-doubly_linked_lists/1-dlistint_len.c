#include "lists.h"
/**
 * dlistint_len - function return count linked list
 *
 * @h: head of double linked list
 * Return: counter double linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
