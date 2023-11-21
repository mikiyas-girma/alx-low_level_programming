#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: pointer to the list
 * @n: a new node to be added at the beginning
 *
 * Return: address of the new added element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
