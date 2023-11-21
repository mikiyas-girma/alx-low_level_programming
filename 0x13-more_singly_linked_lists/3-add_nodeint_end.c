#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @n: new node to be added at the end of the list
 * @head: pointer to the elements of the list
 *
 * Return: the address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prev, *temp;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp)
	{
		prev = temp;
		temp = temp->next;
	}

	prev->next = new;
	return (new);
}
