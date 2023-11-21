#include "lists.h"
/**
 * listint_len - returns the number of elements in linkedlist
 * @h: pointer to first node in a list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
