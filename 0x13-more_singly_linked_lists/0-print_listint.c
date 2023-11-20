#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: number of lists.
 */

size_t print_listint(const listint_t *head)
{
  size_t count = 0;

  while (h)
  {
    printf("%d\n", h->n);
    count++;
    h = h->next;
  }
  return (count);
}
