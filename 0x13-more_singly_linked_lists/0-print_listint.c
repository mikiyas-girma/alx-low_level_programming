#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: number of lists.
 */

size_t print_listint(const listint_t *head)
{
  listint_t *current = head;

  while (current != NULL)
  {
    printf("%d\n", current->n);
    current = current->next;
  }
}
